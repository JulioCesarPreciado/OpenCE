#!/usr/bin/env python3
"""Puts the menus' text in this fork's language (Spanish):

    python tools/menu_language.py            # translate port/assets/menus/ce/*.xml
    python tools/menu_language.py --missing  # list the text with no translation yet

The menus' files are written in English, by tools/ce_menus.py from the PC
version's tags and by tools/port_settings.py. The catalog
(port/assets/menus/language/es.json) gives each English text its Spanish
one, and this replaces the text the menus show: a widget's text=, a string
list's <string text=...>, and each of the values a spinner shows (strings=,
separated by |). Names, settings, values written to config.toml and the
functions' names are not text and are left alone.

A text is looked up whole, as the file has it (a line break is \\n). One
the catalog has not, or gives itself for (a name, a number), stays as it
is, so this can be run again over files already translated.
tools/ce_menus.py runs it over what it writes, and the tests compare the
files with the generators' output translated the same way.

A <string> keeps its map= (its place in the PC version's list): with
display.menu_language = "maps" and a Custom Edition's loc.map, that
edition's own text is shown instead, as before.
"""

import json
import re
import sys
from pathlib import Path
from xml.sax.saxutils import quoteattr, unescape

ROOT = Path(__file__).resolve().parent.parent
MENUS = ROOT / "port/assets/menus"
CE = MENUS / "ce"
CATALOG = MENUS / "language/es.json"
# the attributes that hold text shown, and the one whose values are shown
# apart (a spinner's)
ATTRIBUTE = re.compile(r'(\s)(text|strings)=("[^"]*"|\'[^\']*\')')
ENTITIES = {"&quot;": '"', "&apos;": "'", "&#10;": "\n", "&#13;": "\r", "&#9;": "\t"}
_catalog = None


def catalog() -> dict:
    global _catalog
    if _catalog is None:
        _catalog = {}
        if CATALOG.is_file():
            for section in json.loads(CATALOG.read_text(encoding="utf-8")).values():
                _catalog.update(section)
    return _catalog


def translated(text: str) -> str:
    """the text in the catalog's language, or itself"""
    return catalog().get(text, text)


def translated_value(name: str, value: str) -> str:
    if name == "strings":
        return "|".join(translated(item) for item in value.split("|"))
    return translated(value)


def translate_xml(text: str) -> str:
    """the menu file's text with what it shows translated"""
    def attribute(match):
        value = unescape(match.group(3)[1:-1], ENTITIES)
        return f"{match.group(1)}{match.group(2)}={quoteattr(translated_value(match.group(2), value))}"

    return ATTRIBUTE.sub(attribute, text)


def shown(text: str) -> list:
    """every text the menu file shows: (attribute, value), a spinner's values each"""
    found = []
    for match in ATTRIBUTE.finditer(text):
        value = unescape(match.group(3)[1:-1], ENTITIES)
        found += [(match.group(2), item) for item in (value.split("|") if match.group(2) == "strings" else [value])]
    return found


def files() -> list:
    return sorted(path for path in CE.glob("*.xml") if path.name != "bitmaps.xml")


def apply() -> int:
    changed = 0
    for path in files():
        text = path.read_text(encoding="utf-8")
        new = translate_xml(text)
        if new != text:
            path.write_text(new, encoding="utf-8")
            changed += 1
    return changed


def missing() -> dict:
    """the text shown that the catalog has no entry for, by file"""
    result = {}
    known = catalog()
    values = set(known.values())
    for path in files():
        texts = []
        for _, value in shown(path.read_text(encoding="utf-8")):
            # (text with no letter is not language: a number, a mark)
            if value not in known and value not in values and value not in texts and re.search(r"[A-Za-z]", value):
                texts.append(value)
        if texts:
            result[path.name] = texts
    return result


if __name__ == "__main__":
    if "--missing" in sys.argv:
        left = missing()
        json.dump(left, sys.stdout, ensure_ascii=False, indent=1)
        print(f"\n{sum(len(texts) for texts in left.values())} texts in {len(left)} files", file=sys.stderr)
    else:
        print(f"{apply()} files changed")
