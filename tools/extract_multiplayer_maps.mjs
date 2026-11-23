/*
EXTRACT_MULTIPLAYER_MAPS.MJS

Copies the multiplayer maps and the menus' map out of an Xbox disc image
into a maps folder, without the campaign's levels and the disc's loading
picture (the game has its own), for a
dedicated server's data (deploy/local, deploy/docker). It reads the image
with the page's own reader (port/web/site/xiso-worker.js), which checks
every offset, size and map header.

    node tools/extract_multiplayer_maps.mjs <disc image> [<maps folder>]

The folder is assets/maps unless one is given (assets/ is not in the
repository: game data never is).
*/

import fs from 'node:fs';
import path from 'node:path';
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const [image, folder = path.join(root, 'assets', 'maps')] = process.argv.slice(2);
if (!image) {
  console.error('usage: node tools/extract_multiplayer_maps.mjs <disc image> [<maps folder>]');
  process.exit(2);
}

const CHUNK = 4 * 1024 * 1024;
const xiso = createRequire(import.meta.url)(path.join(root, 'port/web/site/xiso-worker.js'));
// (a Blob over the file: the image is read a slice at a time, never whole)
const file = new File([await fs.openAsBlob(image)], path.basename(image));
const files = await xiso.imageFiles(file, { campaign: false, loadingPicture: false });
fs.mkdirSync(folder, { recursive: true });
let total = 0;
for (const entry of files) {
  const handle = fs.openSync(path.join(folder, entry.name.toLowerCase()), 'w');
  try {
    for (let offset = 0; offset < entry.size; offset += CHUNK) {
      fs.writeSync(handle, await entry.read(offset, Math.min(CHUNK, entry.size - offset)));
    }
  } finally {
    fs.closeSync(handle);
  }
  total += entry.size;
}
console.log(`${files.length} files (${Math.round(total / 1e6)} MB) in ${folder}`);
