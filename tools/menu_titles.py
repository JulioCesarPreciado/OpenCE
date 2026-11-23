#!/usr/bin/env python3
"""Draws the menus' titles and the main menu's items in this fork's language
(Spanish):

    python tools/menu_titles.py

The screens' headers and the main menu's items are pictures of text. The
redraws have the PC version's, in English, as letters drawn by hand, and
those letters have no J, no accents and no ñ. So each is drawn again here
with its Spanish text in OpenCE (port/assets/fonts/OpenCE-Regular.ttf, the
font the port's own titles are set in: tools/ce_menus.py's Art.title), its
letters as outlines, in the place, size and colours the redraws give
theirs:

- a header: the text in the headers' blue over their dark backdrop
  (port_settings.title_backdrop);
- a main menu item: two frames, dim, then white with its blue glow
  (as port_settings.menu_item_frames draws MODS).

Each drawing goes to port/assets/menus/own, by its frame's name, where
tools/ce_menus.py looks before the redraws, and is drawn as that does. The
port's own titles (port_settings.TITLES) are drawn by Art.title with their
text from the catalog (port/assets/menus/language/es.json), as the
generator now draws them.

Needs rsvg-convert, Pillow, NumPy, SciPy and fontTools.
"""

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ce_menus  # noqa: E402
import menu_language  # noqa: E402
import port_settings  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
FONT = ROOT / "port/assets/fonts/OpenCE-Regular.ttf"
MAIN = "shell/main_menu"
MT = f"{MAIN}/multiplayer_type_select"
MS = f"{MAIN}/settings_select/multiplayer_setup"
PE = f"{MAIN}/settings_select/player_setup/player_profile_edit"
# the PC version's headers this fork's menus reach, and what each says (the
# campaign's are left: no menu leads to them); a frame is 512 by 64, or as
# given
HEADERS = {
    f"{MAIN}/gametype_select/header_select_gametype": "ELIGE TIPO DE JUEGO",
    f"{MT}/direct_ip/header_direct_ip": "IP DIRECTA",
    f"{MT}/header_multiplayer": "MULTIJUGADOR",
    f"{MT}/join_game/filters/header_filters": "FILTROS",
    f"{MT}/mp_map_select/header_select_map": "ELIGE MAPA",
    f"{MT}/server_settings/header_server_settings": "AJUSTES DE PARTIDA",
    f"{MAIN}/player_profiles_select/header_select_profile": "ELIGE PERFIL",
    f"{MS}/indicator_options_edit/header_indicator_options": "INDICADORES",
    f"{MS}/item_options_edit/header_item_options": "OBJETOS",
    f"{MS}/name_edit/header_gametype_name": "NOMBRE DEL JUEGO",
    f"{MS}/player_options_edit/header_player_options": "OPCIONES DE JUGADOR",
    f"{MS}/playlist_edit/game_type_select/header_rules": "REGLAS",
    f"{MS}/playlist_edit/header_edit_multiplayer_gametype": "EDITAR TIPO DE JUEGO",
    f"{MS}/playlist_edit/header_set_options": "OPCIONES",
    f"{MS}/playlist_select/header_select_gametype_to_edit": "TIPO DE JUEGO A EDITAR",
    f"{MS}/teamplay_options_edit/header_teamplay_options": "OPCIONES DE EQUIPO",
    f"{MS}/vehicle_options_edit/header_vehicle_options": "VEHÍCULOS",
    f"{PE}/audio_settings/header_profile_audio_settings": "AUDIO",
    f"{PE}/color_edit/header_profile_color": "COLOR DEL PERFIL",
    f"{PE}/controller_edit/header_profile_controller_setting": "CONTROLES",
    f"{PE}/controls_setup/header_profile_controls_settings": "TECLAS",
    f"{PE}/header_edit_profile_settings": "AJUSTES DEL PERFIL",
    f"{PE}/mouse_settings/header_profile_mouse_settings": "MOUSE",
    f"{PE}/name_edit/header_profile_name": "ESCRIBE TU NOMBRE",
    f"{PE}/network_setup/header_profile_network_settings": "RED",
    f"{PE}/video_settings/header_profile_video_settings": "VIDEO",
}
HEADER_SIZES = {f"{MS}/playlist_edit/header_edit_multiplayer_gametype": (1024, 64)}
HEADER_SIZE = (512, 64)
# the widest a header's text may be, in the menus' units: within its frame
HEADER_TEXT_WIDTH = 440
# the main menu's items (two frames each, 256 by 64)
ITEMS = {
    f"{MAIN}/menu_multiplayer": "MULTIJUGADOR",
    f"{MAIN}/menu_profile": "PERFILES",
    f"{MAIN}/menu_settings": "AJUSTES",
    f"{MAIN}/menu_quit": "SALIR",
}
ITEM_SIZE = (256, 64)
ITEM_TEXT_WIDTH = 236
# the redraws' capitals are 21.5 high; an item's are drawn at this scale of it
REDRAW_CAP = 21.5


class Letters:
    """the font's letters as SVG paths, a capital the height asked for"""

    def __init__(self):
        from fontTools.ttLib import TTFont

        self.font = TTFont(str(FONT))
        self.glyphs = self.font.getGlyphSet()
        self.names = self.font.getBestCmap()
        self.cap = self.bounds("H")[3]

    def bounds(self, letter: str) -> tuple:
        from fontTools.pens.boundsPen import BoundsPen

        pen = BoundsPen(self.glyphs)
        self.glyphs[self.names[ord(letter)]].draw(pen)
        return pen.bounds

    def text(self, text: str, cap_height: float) -> tuple:
        """(the text's paths with its first letter's left at 0 and its
        capitals' top at 0, its width): each a d for a <path>, in order"""
        from fontTools.pens.svgPathPen import SVGPathPen
        from fontTools.pens.transformPen import TransformPen

        scale = cap_height / self.cap
        x, paths = 0.0, []
        for letter in text:
            if ord(letter) not in self.names:
                sys.exit(f"{FONT.name} has no {letter!r}")
            glyph = self.glyphs[self.names[ord(letter)]]
            pen = SVGPathPen(self.glyphs, lambda number: f"{number:.2f}".rstrip("0").rstrip("."))
            glyph.draw(TransformPen(pen, (scale, 0, 0, -scale, x, cap_height)))
            if pen.getCommands():
                paths.append(pen.getCommands())
            x += glyph.width * scale
        # (the last letter's own right side, not its advance)
        last = self.glyphs[self.names[ord(text[-1])]]
        right = self.bounds(text[-1])[2] if self.bounds(text[-1]) else last.width
        return paths, x - (last.width - right) * scale


def header(letters: Letters, text: str, size: tuple) -> str:
    width, height = size
    paths, text_width = letters.text(text, port_settings.TITLE_CAP)
    if text_width > HEADER_TEXT_WIDTH:
        sys.exit(f"{text!r} is {text_width:.0f} wide: a header holds {HEADER_TEXT_WIDTH}")
    backdrop = port_settings.title_backdrop(text_width)
    # (the backdrop's own drawing, in this frame's size)
    inner = backdrop[backdrop.index("  <defs>"):backdrop.rindex("</svg>")]
    colour = "#%02x%02x%02x" % port_settings.TITLE_COLOR[:3]
    shapes = "\n".join(f'    <path d="{d}"/>' for d in paths)
    return (
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" viewBox="0 0 {width} {height}">\n'
        f"{inner}"
        f'  <!-- "{text}", in OpenCE (tools/menu_titles.py) -->\n'
        f'  <g fill="{colour}" transform="translate({port_settings.TITLE_LEFT} {port_settings.TITLE_TOP})">\n'
        f"{shapes}\n  </g>\n</svg>\n")


def item(letters: Letters, text: str) -> list:
    """the item's two frames: dim, then white with its blue glow"""
    width, height = ITEM_SIZE
    cap = REDRAW_CAP * port_settings.MENU_ITEM_SCALE
    paths, text_width = letters.text(text, cap)
    if text_width > ITEM_TEXT_WIDTH:
        sys.exit(f"{text!r} is {text_width:.0f} wide: an item holds {ITEM_TEXT_WIDTH}")
    place = f'transform="translate({port_settings.MENU_ITEM_MIDDLE - text_width / 2:.2f} {port_settings.MENU_ITEM_TOP})"'
    shapes = "\n".join(f'      <path d="{d}"/>' for d in paths)
    head = f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" viewBox="0 0 {width} {height}">\n'
    dim = (f'{head}  <!-- "{text}" (normal state: dim blue), in OpenCE (tools/menu_titles.py) -->\n'
           f'  <g fill="#2895ff" fill-opacity="0.467">\n    <g {place}>\n{shapes}\n    </g>\n  </g>\n</svg>\n')
    glow = (f"{head}  <defs>\n"
            f'    <filter id="glow" filterUnits="userSpaceOnUse" x="0" y="0" width="{width}" height="{height}">\n'
            '      <feGaussianBlur stdDeviation="2.19"/>\n    </filter>\n  </defs>\n'
            f'  <!-- "{text}" (highlighted: white with blue glow), in OpenCE (tools/menu_titles.py) -->\n'
            '  <g fill="#2895ff" stroke="#2895ff" stroke-width="6.3" stroke-linejoin="round" opacity="0.650" '
            f'filter="url(#glow)">\n    <g {place}>\n{shapes}\n    </g>\n  </g>\n'
            f'  <g fill="#fff">\n    <g {place}>\n{shapes}\n    </g>\n  </g>\n</svg>\n')
    return [dim, glow]


def main() -> None:
    letters = Letters()
    art = ce_menus.Art.__new__(ce_menus.Art)
    art.redraws, art.svgs, art.pngs, art.pictures = ce_menus.OWN_REDRAWS, [], [], []
    own = ce_menus.OWN_REDRAWS
    for relative, text in sorted(HEADERS.items()):
        size = HEADER_SIZES.get(relative, HEADER_SIZE)
        svg = own / f"{relative}.svg"
        svg.parent.mkdir(parents=True, exist_ok=True)
        svg.write_text(header(letters, text, size), encoding="utf-8")
        art.draw(relative, 0, 1, size[0], size[1], ce_menus.MENUS / f"ce/{relative}__0.png", [])
        print(f"ce/{relative}__0.png: {text}")
    for relative, text in sorted(ITEMS.items()):
        for index, frame in enumerate(item(letters, text)):
            svg = own / f"{relative}__{index}.svg"
            svg.write_text(frame, encoding="utf-8")
            art.draw(relative, index, 2, ITEM_SIZE[0], ITEM_SIZE[1], ce_menus.MENUS / f"ce/{relative}__{index}.png", [])
        print(f"ce/{relative}__0.png, __1.png: {text}")
    # the port's own titles, as the generator draws them, their text from the catalog
    for name, text in sorted(port_settings.TITLES.items()):
        art.title(name, menu_language.translated(text))
        print(f"ce/port/{name}.png: {menu_language.translated(text)}")
    if art.pictures:
        sys.exit(f"drawn as placeholders: {art.pictures}")


if __name__ == "__main__":
    main()
