#!/usr/bin/env python3
"""Writes the table the game puts its own text in this fork's language
(Spanish) with:

    python tools/game_text.py           # write port/linux/game/game_text_table.h
    python tools/game_text.py --check   # say whether the table is the catalogs'

The text a game shows (the kill notices, the scores, what was picked up, the
pause menu, the errors) is not the menus' files': it is in the maps' string
lists and, for the maps of the NTSC disc, in the game itself
(source/text/text_group.c). port/linux/game/game_text.c shows each of those
texts in Spanish where the table has it, whichever map or list it is in: a
text is looked up whole, by its characters, never by its tag or its place.

The table is made of two catalogs, each English text with its Spanish one:
the menus' (port/assets/menus/language/es.json, its "menus" section: the PC
version's string lists, which have the multiplayer text too) and the game's
own (port/assets/game_text/es.json), which wins. A line break is \\n in
both, as the menus' files write it; the table has such a text twice, with
the line breaks of the Xbox's maps (CR LF) and with a line feed alone.

The game reads many of these texts as the format of what it prints ("%s was
killed by %s"), so a Spanish text must have its English one's conversions,
in the same order (as port/linux/game/mod_strings.c asks of a mod's): one
that has not is an error here, as is a character the game's fonts have not
(past Latin-1). A text its catalog gives itself for (a name) is left out.
"""

import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MENUS_CATALOG = ROOT / "port/assets/menus/language/es.json"
GAME_CATALOG = ROOT / "port/assets/game_text/es.json"
TABLE = ROOT / "port/linux/game/game_text_table.h"
# the characters between a conversion's % and its letter (mod_strings.c's
# format_conversions)
CONVERSION_MIDDLE = "-+ #0123456789.*hlLqjzt"
MODIFIERS = "hlLqjzt"
# the most characters of a literal on one line of the table
LINE = 96


def conversions(text: str) -> list:
    """a format's conversions as printf reads their arguments: (letter, modifier, stars) each"""
    found = []
    index = 0
    while index < len(text):
        if text[index] != "%":
            index += 1
            continue
        index += 1
        if index < len(text) and text[index] == "%":
            index += 1
            continue
        modifier = ""
        stars = 0
        while index < len(text) and text[index] in CONVERSION_MIDDLE:
            if text[index] == "*":
                stars += 1
            elif text[index] in MODIFIERS:
                modifier += text[index]
            index += 1
        found.append((text[index] if index < len(text) else "", modifier[:2], stars))
        index += 1
    return found


def catalog() -> dict:
    """each English text with its Spanish one, a line break a line feed"""
    texts = dict(json.loads(MENUS_CATALOG.read_text(encoding="utf-8"))["menus"])
    for section in json.loads(GAME_CATALOG.read_text(encoding="utf-8")).values():
        texts.update(section)
    return {english.replace("\\n", "\n"): spanish.replace("\\n", "\n")
            for english, spanish in texts.items() if english != spanish}


def problems(texts: dict) -> list:
    found = []
    for english, spanish in texts.items():
        if conversions(english) != conversions(spanish):
            found.append(f"{spanish!r} has not the conversions of {english!r}")
        if not english or not spanish:
            found.append(f"{english!r} or its text is empty")
        for character in spanish:
            if ord(character) > 0xFF or (ord(character) < 0x20 and character not in "\t\n"):
                found.append(f"{spanish!r} has a character the fonts have not: {character!r}")
        if "\r" in english or "\r" in spanish:
            found.append(f"{english!r} has a carriage return: write its line breaks as \\n")
    return found


def pairs(texts: dict) -> list:
    """the table's (English, Spanish), with each kind of line break, in the
    order of the English texts' UTF-16 characters"""
    found = {}
    for english, spanish in texts.items():
        found[english] = spanish
        if "\n" in english:
            found[english.replace("\n", "\r\n")] = spanish.replace("\n", "\r\n")
    return sorted(found.items(), key=lambda pair: units(pair[0]))


def units(text: str) -> list:
    data = text.encode("utf-16-le")
    return [data[index] | data[index + 1] << 8 for index in range(0, len(data), 2)]


def literal(text: str, indent: str) -> str:
    """the text as a wide string literal of C, over as many lines as it needs"""
    escapes = {"\t": "\\t", "\n": "\\n", "\r": "\\r", '"': '\\"', "\\": "\\\\", "?": "\\?"}
    lines = []
    line = ""
    hexadecimal = False
    for unit in units(text):
        character = chr(unit)
        if character in escapes:
            piece = escapes[character]
        elif 0x20 <= unit < 0x7F:
            # (a digit after an escape would be read as part of it)
            if hexadecimal and character in "0123456789abcdefABCDEF":
                line += '" L"'
            piece = character
        else:
            piece = f"\\x{unit:04X}"
        hexadecimal = piece.startswith("\\x")
        line += piece
        if len(line) >= LINE:
            lines.append(line)
            line = ""
            hexadecimal = False
    if line or not lines:
        lines.append(line)
    return f"\n{indent}".join(f'L"{line}"' for line in lines)


def table(texts: dict) -> str:
    listed = pairs(texts)
    out = [
        "/*",
        "GAME_TEXT_TABLE.H",
        "",
        "The game's texts and their Spanish ones (game_text.c). Written by",
        "tools/game_text.py from port/assets/menus/language/es.json and",
        "port/assets/game_text/es.json: change those and run it, not this file.",
        "*/",
        "",
        "/* each Spanish text (not const: the game ends a string as it gets it,",
        "text_group.c) */",
    ]
    for index, (_, spanish) in enumerate(listed):
        out.append(f"static wchar_t game_text_{index}[] = {literal(spanish, chr(9))};")
    out += [
        "",
        "/* each English text and its Spanish one, in the order of the English",
        "texts' characters */",
        "static struct game_text const game_texts[] =",
        "{",
    ]
    for index, (english, _) in enumerate(listed):
        out.append(f"\t{{ {literal(english, chr(9) + chr(9))}, game_text_{index} }},")
    out += ["};", ""]
    return "\n".join(out)


def main() -> int:
    texts = catalog()
    found = problems(texts)
    for problem in found:
        print(problem, file=sys.stderr)
    if found:
        return 1
    written = table(texts)
    if "--check" in sys.argv[1:]:
        same = TABLE.is_file() and TABLE.read_text(encoding="utf-8") == written
        print("the table is the catalogs'" if same else f"{TABLE.relative_to(ROOT)} is not the catalogs': run tools/game_text.py")
        return 0 if same else 1
    TABLE.write_text(written, encoding="utf-8")
    print(f"{len(pairs(texts))} texts in {TABLE.relative_to(ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
