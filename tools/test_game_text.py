"""The game's own text in Spanish (port/linux/game/game_text.c).

The table the game looks its texts up in (game_text_table.h) is written by
tools/game_text.py from two catalogs. Checked here: the table is what the
catalogs give, every Spanish text reads the arguments its English one does,
the texts are in the order the game's search needs, the game's built-in
multiplayer strings (source/text/text_group.c) all have a Spanish text, and
the search itself, taken from game_text.c and compiled with the table, finds
every text and nothing else.

Every build compiles the same game_text.c and the same table (the builds
take port/linux/game whole), so the desktop games, the Android app and the
web page show the same text; that is checked too.

No game data or build needed; the search's test needs a C compiler.
"""

import re
import shutil
import subprocess
from pathlib import Path

import pytest

import game_text

ROOT = Path(__file__).resolve().parent.parent
GAME_TEXT_C = ROOT / "port/linux/game/game_text.c"
TEXT_GROUP_C = ROOT / "source/text/text_group.c"
MODS_C = ROOT / "port/linux/game/mods.c"

SEARCH_TEST = r"""
#include <stdio.h>
#include <stddef.h>
#include <limits.h>
#define NUMBEROF(array) (sizeof(array) / sizeof((array)[0]))
struct game_text { wchar_t const *text; wchar_t *translation; };
#include "game_text_table.h"
#include "search.inc"
int main(void)
{
	long index;
	long missed = 0;

	for (index = 0; index < (long)NUMBEROF(game_texts); index++)
	{
		if (text_find(game_texts[index].text, LONG_MAX) != game_texts[index].translation)
			missed++;
	}
	printf("%d %ld %ld %d %d %d %d\n", (int)sizeof(wchar_t), (long)NUMBEROF(game_texts), missed,
		text_find(L"=SELECTED", 7) != NULL, text_find(L"=SELECTED", 6) != NULL,
		text_find(L"=SELECTED", LONG_MAX) != NULL, text_find(L"", LONG_MAX) != NULL);
	return 0;
}
"""


def built_in_strings():
    """text_group.c's built-in multiplayer strings, as the game has them"""
    source = TEXT_GROUP_C.read_text(encoding="utf-8")
    found = re.findall(r'/\* \d+ \*/ L"((?:[^"\\]|\\.)*)"', source)
    assert len(found) == 148
    return [text.encode().decode("unicode_escape") for text in found]


def test_the_table_is_the_catalogs():
    texts = game_text.catalog()
    assert game_text.problems(texts) == []
    assert game_text.TABLE.read_text(encoding="utf-8") == game_text.table(texts), "run tools/game_text.py"


def test_a_spanish_text_reads_its_english_texts_arguments():
    assert game_text.conversions("%s was killed by %s") == [("s", "", 0), ("s", "", 0)]
    assert game_text.conversions("100%% in %.2f seconds, %ld of %*d") == [("f", "", 0), ("d", "l", 0), ("d", "", 1)]
    assert game_text.problems({"%s was killed by %s": "%s cayó"}) != []
    assert game_text.problems({"You scored %d to %d.": "Anotaste %s a %d."}) != []
    assert game_text.problems({"Loading...": "Cargando…"}) != []
    for english, spanish in game_text.pairs(game_text.catalog()):
        assert game_text.conversions(english) == game_text.conversions(spanish), english
        # (a text shown over several lines keeps them: its box does not wrap)
        assert english.count("\n") == spanish.count("\n"), english


def test_the_texts_are_in_the_searchs_order():
    listed = [game_text.units(english) for english, _ in game_text.pairs(game_text.catalog())]
    assert all(first < second for first, second in zip(listed, listed[1:]))


def test_a_line_break_is_found_as_the_maps_have_it():
    table = dict(game_text.pairs(game_text.catalog()))
    assert table["Unable to complete\r\nthe last operation."] == "No se pudo completar\r\nla última operación."
    assert table["Unable to complete\nthe last operation."] == "No se pudo completar\nla última operación."


def test_the_built_in_strings_have_spanish():
    table = dict(game_text.pairs(game_text.catalog()))
    assert [text for text in built_in_strings() if text not in table] == []
    assert table["%s was killed by %s"] == "%s cayó ante %s"
    assert table["Hold BACK for score"] == "Mantén BACK para ver los puntos"


def test_the_game_shows_the_table_in_every_build():
    # the built-in strings and each map's lists go through game_text.c
    assert "game_text_translated(fallback_multiplayer_game_text_strings[fallback_index])" in TEXT_GROUP_C.read_text()
    mods = MODS_C.read_text()
    assert mods.index("game_text_tags_loaded();") < mods.index("mods_update(FALSE, TRUE);")
    # no build leaves it out or has its own
    source = GAME_TEXT_C.read_text()
    assert '#include "game_text_table.h"' in source
    assert not re.search(r"#\s*if.*HALO_(WEB|ANDROID|WINDOWS|GLES)", source)
    # (each build compiles every file of the port's game folder)
    for script in ("linux_build.py", "windows_build.py", "android_build.py", "web_build.py"):
        assert re.search(r'Path\((linux_)?config\["game_sources"\]\)\.glob\("\*\.c"\)', (ROOT / "tools" / script).read_text()), script


def test_the_search_finds_every_text(tmp_path):
    compiler = shutil.which("clang") or shutil.which("cc")
    if not compiler:
        pytest.skip("no C compiler")
    source = GAME_TEXT_C.read_text(encoding="utf-8")
    search = source[source.index("/* how a text of at most"):source.index("/* ---------- public code */")]
    (tmp_path / "search.inc").write_text(search)
    (tmp_path / "search.c").write_text(SEARCH_TEST)
    program = tmp_path / "search"
    subprocess.run([compiler, "-std=gnu89", "-fshort-wchar", "-I", str(GAME_TEXT_C.parent), "-I", str(tmp_path),
                    str(tmp_path / "search.c"), "-o", str(program)], check=True)
    out = subprocess.run([str(program)], check=True, capture_output=True, text=True).stdout.split()
    count = len(game_text.pairs(game_text.catalog()))
    # (16-bit characters, every text found; one is found by its first
    # characters only when it is told that is all of it)
    assert out == ["2", str(count), "0", "1", "0", "0", "0"]
