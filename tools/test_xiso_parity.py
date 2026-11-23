"""The three disc image importers copy the same files.

The desktop games (port/linux/src/xiso.c), the Android app
(XisoExtractor.java) and the web page (xiso-worker.js, with the choices of
site-config.js) each copy the maps folder out of the player's disc image.
This fork wants every build to end with the same maps folder, so each
importer's list of the campaign's levels, and whether it copies them and the
disc's loading screen picture, are read from its source and compared. The
levels are checked against the game's own (scenario_paths in ui_widget.c).

No game data or build needed.
"""

import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
XISO_C = ROOT / "port/linux/src/xiso.c"
XISO_JAVA = ROOT / "port/android/app/src/main/java/com/halo/decomp/XisoExtractor.java"
XISO_WORKER = ROOT / "port/web/site/xiso-worker.js"
SITE_CONFIG = ROOT / "port/web/site/site-config.js"
UI_WIDGET = ROOT / "source/interface/ui_widget.c"


def quoted(text):
    return re.findall(r'"([^"]*)"|\'([^\']*)\'', text)


def strings(text):
    return [double or single for double, single in quoted(text)]


def block(source, pattern):
    match = re.search(pattern, source, re.S)
    assert match, f"{pattern!r} not found"
    return match.group(1)


def game_levels():
    paths = strings(block(UI_WIDGET.read_text(), r"scenario_paths\[10\]\s*=\s*\{(.*?)\};"))
    return [path.rsplit("\\", 1)[-1] for path in paths]


def native_choices(source, campaign, picture):
    def flag(name):
        value = block(source, name + r"\s*(?:=\s*)?(\w+)")
        return {"0": False, "1": True, "false": False, "true": True}[value]

    return flag(campaign), flag(picture)


def c_importer():
    source = XISO_C.read_text()
    levels = strings(block(source, r"xiso_campaign_levels\[\]\s*=\s*\{(.*?)\};"))
    return levels, native_choices(source, r"#define XISO_COPY_CAMPAIGN", r"#define XISO_COPY_DISC_LOADING_PICTURE")


def java_importer():
    source = XISO_JAVA.read_text()
    levels = strings(block(source, r"CAMPAIGN_LEVELS\s*=\s*\{(.*?)\};"))
    return levels, native_choices(source, r"boolean COPY_CAMPAIGN", r"boolean COPY_DISC_LOADING_PICTURE")


def web_importer():
    worker = XISO_WORKER.read_text()
    levels = strings(block(worker, r"const CAMPAIGN_LEVELS\s*=\s*\[(.*?)\];"))
    config = SITE_CONFIG.read_text()

    # (an option left out of site-config.js is true: app.js's "!== false")
    def option(name):
        match = re.search(r"^\s*" + name + r"\s*:\s*(\w+)", config, re.M)
        return match is None or match.group(1) != "false"

    return levels, (option("campaign"), option("discLoadingPicture"))


def test_every_importer_knows_the_games_campaign_levels():
    levels = game_levels()
    assert len(levels) == 10
    assert c_importer()[0] == levels
    assert java_importer()[0] == levels
    assert web_importer()[0] == levels


def test_every_importer_copies_the_same_files():
    web = web_importer()[1]
    assert c_importer()[1] == web, "xiso.c's XISO_COPY_* differ from site-config.js"
    assert java_importer()[1] == web, "XisoExtractor.java's COPY_* differ from site-config.js"


def test_this_fork_copies_neither_the_campaign_nor_the_discs_picture():
    assert web_importer()[1] == (False, False)
