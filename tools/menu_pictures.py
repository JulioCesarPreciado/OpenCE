#!/usr/bin/env python3
"""Draws this fork's pictures for the menus' option lists, where the PC
version's have no redraw and the original project drew a placeholder:

    python tools/menu_pictures.py

Each is a Lucide icon (port/assets/icons/lucide) in the menus' blue, with
their glow, in the middle of what its screen shows of the frame. It writes
each drawing to port/assets/menus/own, by its frame's name, where
tools/ce_menus.py looks for a frame's drawing before the redraws', and draws
it as that does (its Art.draw): the PNG in ce/, the drawing's copy in svg/.
Multiplayer's list has a row for each of six pictures, three more than the
PC version's bitmap has frames: port_settings.OWN_FRAMES.

Needs rsvg-convert, Pillow, NumPy and SciPy, as tools/ce_menus.py does.
"""

import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ce_menus  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
ICONS = ROOT / "port/assets/icons/lucide"
FRAME_SIZE = (512, 256)
# an icon's side in the menus' screen, and its middle's height in the frame
ICON_SIZE = 116
ICON_MIDDLE = 104
# Lucide draws in a square of 24 with a line of 2; this large, a finer one
ICON_GRID = 24
ICON_LINE = 1.3
# the menus' blue (their text's) and the lighter one of a focused edge
BLUE = "#2896FF"
LIGHT = "#8ECBFF"
MP = "shell/main_menu/multiplayer_type_select/mp_options"
GAMETYPE = "shell/main_menu/settings_select/multiplayer_setup/playlist_edit/gametype_options"
PROFILE = "shell/main_menu/settings_select/player_setup/player_profile_edit/profile_options"
# each bitmap: the width its screen's widget shows of the frame (the
# widget's, ce/*.xml), how many frames the PC version's bitmap has, and the
# icon of each frame drawn here, by the row it is shown for
PICTURES = {
    # Server Browser, LAN, Direct Link, Create's Internet and LAN, Edit Gametypes
    MP: (307, 3, {0: "globe", 1: "network", 2: "link", 3: "radio-tower", 4: "router", 5: "sliders-horizontal"}),
    # Change Name, Item Options, Vehicle Options, Teamplay Options, Save Changes
    GAMETYPE: (284, 8, {0: "square-pen", 3: "crosshair", 4: "car", 6: "users", 7: "save"}),
    # Controls Setup, Mouse Setup, Audio Setup, Video Setup, Network Setup, About
    PROFILE: (279, 9, {1: "keyboard", 3: "mouse", 4: "volume-2", 5: "monitor", 6: "wifi", 8: "info"}),
}


def icon_shapes(name: str) -> str:
    """the icon's shapes: what its <svg> holds"""
    text = (ICONS / f"{name}.svg").read_text()
    return "\n".join(f"      {line.strip()}" for line in re.search(r"<svg[^>]*>(.*)</svg>", text, re.S).group(1).strip().split("\n"))


def picture(icon: str, shown_width: int) -> str:
    width, height = FRAME_SIZE
    scale = ICON_SIZE / ICON_GRID
    left, top = shown_width / 2 - ICON_SIZE / 2, ICON_MIDDLE - ICON_SIZE / 2
    shapes = icon_shapes(icon)
    layers = "\n".join(
        f'    <g stroke="{colour}" stroke-width="{line}" opacity="{opacity}"{blur}>\n{shapes}\n    </g>'
        for colour, line, opacity, blur in (
            (BLUE, ICON_LINE * 2.2, 0.55, ' filter="url(#far)"'), (BLUE, ICON_LINE * 1.4, 0.9, ' filter="url(#near)"'),
            (LIGHT, ICON_LINE, 1, "")))
    return (
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" viewBox="0 0 {width} {height}">\n'
        f"  <!-- Lucide's {icon} (port/assets/icons/lucide), drawn by tools/menu_pictures.py -->\n"
        "  <defs>\n"
        f'    <filter id="near" filterUnits="userSpaceOnUse" x="0" y="0" width="{ICON_GRID}" height="{ICON_GRID}">'
        '<feGaussianBlur stdDeviation="0.28"/></filter>\n'
        f'    <filter id="far" filterUnits="userSpaceOnUse" x="-4" y="-4" width="{ICON_GRID + 8}" height="{ICON_GRID + 8}">'
        '<feGaussianBlur stdDeviation="0.9"/></filter>\n'
        "  </defs>\n"
        f'  <g transform="translate({left:g} {top:g}) scale({scale:g})" fill="none" stroke-linecap="round"'
        ' stroke-linejoin="round">\n'
        f"{layers}\n"
        "  </g>\n"
        "</svg>\n")


def main() -> None:
    art = ce_menus.Art.__new__(ce_menus.Art)
    art.redraws, art.svgs, art.pngs, art.pictures = ce_menus.OWN_REDRAWS, [], [], []
    width, height = FRAME_SIZE
    for relative, (shown_width, frames, icons) in PICTURES.items():
        for index, icon in sorted(icons.items()):
            svg = ce_menus.OWN_REDRAWS / f"{relative}__{index}.svg"
            svg.parent.mkdir(parents=True, exist_ok=True)
            svg.write_text(picture(icon, shown_width))
            png = f"ce/{relative}__{index}.png"
            art.draw(relative, index, frames, width, height, ce_menus.MENUS / png, [])
            print(f"{png}: {icon}")
    if art.pictures:
        sys.exit(f"drawn as placeholders: {art.pictures}")


if __name__ == "__main__":
    main()
