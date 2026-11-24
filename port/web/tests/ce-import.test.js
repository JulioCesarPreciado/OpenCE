// The page's Custom Edition importer (ce-import-worker.js): what a selection
// of files becomes. A map's picture and description (<name>.bmp, <name>.txt:
// docs/custom_edition_caches.md) go with it; other .bmp and .txt files of a
// folder do not.
'use strict';

const test = require('node:test');
const assert = require('node:assert/strict');
const { plan } = require('../site/ce-import-worker.js');

// a Custom Edition map's header, as the importer checks it, and nothing more
function map(name) {
  const data = new Uint8Array(4096);
  const header = new DataView(data.buffer);
  header.setUint32(0, 0x68656164, true);
  header.setUint32(4, 609, true);
  header.setUint32(8, data.length, true);
  header.setUint32(16, 2048, true);
  header.setUint32(20, 40, true);
  header.setUint16(0x60, 1, true);
  header.setUint32(0x7fc, 0x666f6f74, true);
  return new File([data], name);
}

const picture = (name, size = 64) => new File([new Uint8Array([0x42, 0x4d, ...new Array(size - 2).fill(0)])], name);
const text = (name, words = 'A small map\n2-4 players\n') => new File([words], name);
const paths = async (list) => (await plan(list)).entries.map((entry) => entry.path).sort();

test('a map is imported with its picture and its description', async () => {
  assert.deepEqual(await paths([map('ridge.map'), picture('ridge.bmp'), text('ridge.txt')]),
    ['ridge.bmp', 'ridge.map', 'ridge.txt']);
  // (as a folder gives them, whatever the case of their names)
  assert.deepEqual(await paths([map('Ridge.map'), picture('RIDGE.BMP')]), ['ridge.bmp', 'ridge.map']);
});

test('a picture or text that is no chosen or stored map\'s is left out', async () => {
  assert.deepEqual(await paths([map('ridge.map'), text('readme.txt'), picture('screenshot.bmp')]), ['ridge.map']);
  // (nor the resource maps')
  await assert.rejects(plan([text('ridge.txt')]), /No Custom Edition maps/);
});

test('a picture or description of a map already stored is imported alone', async () => {
  const stored = new Set(['ridge.map']);
  // (Node has a navigator of its own, without storage)
  const own = Object.getOwnPropertyDescriptor(globalThis, 'navigator');
  Object.defineProperty(globalThis, 'navigator', { configurable: true, value: { storage: { getDirectory: async () => ({
    getDirectoryHandle: async () => ({
      getFileHandle: async (name) => { if (!stored.has(name)) throw new Error('NotFoundError'); return {}; },
    }),
  }) } } });
  try {
    assert.deepEqual(await paths([picture('ridge.bmp'), text('ridge.txt'), text('other.txt')]), ['ridge.bmp', 'ridge.txt']);
  } finally {
    if (own) Object.defineProperty(globalThis, 'navigator', own);
    else delete globalThis.navigator;
  }
});

test('a picture is a Windows bitmap of a bounded size, a description short', async () => {
  await assert.rejects(plan([map('ridge.map'), new File([new Uint8Array(64)], 'ridge.bmp')]), /Not a Windows bitmap/);
  await assert.rejects(plan([map('ridge.map'), text('ridge.txt', 'x'.repeat(64 * 1024 + 1))]), /too large/);
});
