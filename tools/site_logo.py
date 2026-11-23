#!/usr/bin/env python3
"""Makes every picture of this fork's logo from its two drawings
(port/assets/logo):

    python tools/site_logo.py

- logo-wide.png, the name with its ring, becomes the web page's title
  (port/web/site/logo.png, 1120 texels wide: twice the page's column) and
  the main menu's logo (port/assets/menus/ce/shell/main_menu/logo__0.png,
  port_settings.LOGO_SIZE units of the menus' screen at three texels a unit,
  the most that keeps it within 2048 texels; tools/ce_menus.py writes the
  same when it writes the menus again).
- logo-mark.png, the mark alone, becomes the game's icon's artwork
  (port/assets/icon): opence-icon-render.png, the mark on transparency, and
  opence-icon.png, the mark on a ground of the page's colours. From those
  tools/app_icon.py, which this runs, makes the desktop windows' icon,
  halo.exe's, the Android launcher's and the web page's.
- logo-wide.png again becomes the loading screen's picture
  (port/assets/logo/loading.tga, which tools/embed_assets.py builds into the
  game): the logo, dim, with LOADING... under it in the titles' font, as
  light on black. The game takes a texel's lightness alone, and sweeps a
  light over the picture.

The mark is cut to what is drawn of it and centred. Needs Pillow and NumPy.
"""

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import port_settings  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
LOGOS = ROOT / "port/assets/logo"
WIDE = LOGOS / "logo-wide.png"
MARK = LOGOS / "logo-mark.png"
PAGE_LOGO = ROOT / "port/web/site/logo.png"
PAGE_LOGO_WIDTH = 1120
MENUS = ROOT / "port/assets/menus"
# the main menu's logo: the file of its one frame, and its texels to a unit
# of the menus' screen (tools/ce_menus.py's SCALE, held to its MAXIMUM_SIZE)
MENU_LOGO_PNG = "ce/shell/main_menu/logo__0.png"
MENU_LOGO_SCALE = 3
ICONS = ROOT / "port/assets/icon"
ICON_SIZE = 512
RENDER_SIZE = 1024
# the mark's share of the icon's side: within the circle a launcher cuts an
# adaptive icon to
MARK_FILL = 0.80
# the icon's ground, top and bottom: style.css's navy and --ground
GROUND_TOP = (0x07, 0x28, 0x52)
GROUND_BOTTOM = (0x02, 0x06, 0x0C)
# what is fainter than this is the glow's end, not the mark
DRAWN_ALPHA = 8
# the loading screen's picture: its size (the game's texture's,
# source/interface/progress_bar.c), the logo's width in it and its share of
# full light, and the words under it
LOADING = LOGOS / "loading.tga"
LOADING_SIZE = (320, 240)
LOADING_LOGO_WIDTH = 248
LOADING_LOGO_LIGHT = 0.55
LOADING_TEXT = "LOADING..."
LOADING_TEXT_LIGHT = 240
LOADING_CAP_HEIGHT = 9
TITLE_FONT = ROOT / "port/assets/fonts/OpenCE-Regular.ttf"
# drawn this many times as large, then brought down
LOADING_OVERSAMPLE = 4


def page_logo() -> None:
    from PIL import Image

    wide = Image.open(WIDE).convert("RGBA")
    height = round(wide.height * PAGE_LOGO_WIDTH / wide.width)
    wide.resize((PAGE_LOGO_WIDTH, height), Image.LANCZOS).save(PAGE_LOGO, optimize=True)
    print(f"{PAGE_LOGO.relative_to(ROOT)}: {PAGE_LOGO_WIDTH}x{height}")


def menu_logo(output: Path = MENUS / MENU_LOGO_PNG) -> None:
    """the main menu's logo: the drawing at the size the menus draw it"""
    from PIL import Image

    width, height = (side * MENU_LOGO_SCALE for side in port_settings.LOGO_SIZE)
    wide = Image.open(WIDE).convert("RGBA")
    if abs(wide.width * height - wide.height * width) > max(wide.size):
        sys.exit(f"{WIDE}: {wide.width}x{wide.height} is not the shape of port_settings.LOGO_SIZE")
    output.parent.mkdir(parents=True, exist_ok=True)
    wide.resize((width, height), Image.LANCZOS).save(output, optimize=True)
    print(f"{output.relative_to(ROOT)}: {width}x{height}")


def loading_picture() -> None:
    """an uncompressed 24-bit TGA, its rows from the bottom, as the game's
    own reader takes one (tools/embed_assets.py checks it)"""
    import struct

    from PIL import Image, ImageDraw, ImageFont

    width, height = LOADING_SIZE
    scale = LOADING_OVERSAMPLE
    picture = Image.new("L", (width * scale, height * scale), 0)
    wide = Image.open(WIDE).convert("RGBA")
    logo_width = LOADING_LOGO_WIDTH * scale
    logo = wide.resize((logo_width, round(wide.height * logo_width / wide.width)), Image.LANCZOS)
    on_black = Image.new("RGBA", logo.size, (0, 0, 0, 255))
    on_black.alpha_composite(logo)
    light = on_black.convert("L").point(lambda value: round(value * LOADING_LOGO_LIGHT))
    top = (height * scale - logo.height) // 2 - 14 * scale
    picture.paste(light, ((width * scale - logo.width) // 2, top))
    probe = ImageFont.truetype(str(TITLE_FONT), 1000)
    left, cap_top, right, cap_bottom = probe.getbbox("H")
    font = ImageFont.truetype(str(TITLE_FONT), round(LOADING_CAP_HEIGHT * scale * 1000 / (cap_bottom - cap_top)))
    draw = ImageDraw.Draw(picture)
    text_width = draw.textlength(LOADING_TEXT, font=font)
    draw.text(((width * scale - text_width) / 2, top + logo.height + 6 * scale - font.getbbox("H")[1]), LOADING_TEXT,
              font=font, fill=LOADING_TEXT_LIGHT)
    picture = picture.resize(LOADING_SIZE, Image.LANCZOS)
    lights = picture.tobytes()
    rows = [bytes(value for light in lights[row * width:(row + 1) * width] for value in (light,) * 3)
            for row in reversed(range(height))]
    header = struct.pack("<BBBHHBHHHHBB", 0, 0, 2, 0, 0, 0, 0, 0, width, height, 24, 0)
    LOADING.write_bytes(header + b"".join(rows))
    print(f"{LOADING.relative_to(ROOT)}: {width}x{height}")


def icon_artwork() -> None:
    from PIL import Image

    mark = Image.open(MARK).convert("RGBA")
    mark = mark.crop(mark.getchannel("A").point(lambda alpha: 255 if alpha > DRAWN_ALPHA else 0).getbbox())
    scale = RENDER_SIZE * MARK_FILL / max(mark.size)
    mark = mark.resize((round(mark.width * scale), round(mark.height * scale)), Image.LANCZOS)
    render = Image.new("RGBA", (RENDER_SIZE, RENDER_SIZE), (0, 0, 0, 0))
    render.alpha_composite(mark, ((RENDER_SIZE - mark.width) // 2, (RENDER_SIZE - mark.height) // 2))
    render.save(ICONS / "opence-icon-render.png", optimize=True)
    ground = Image.new("RGBA", (1, ICON_SIZE))
    for y in range(ICON_SIZE):
        share = y / (ICON_SIZE - 1)
        ground.putpixel((0, y), tuple(round(top + (bottom - top) * share)
                                      for top, bottom in zip(GROUND_TOP, GROUND_BOTTOM)) + (255,))
    icon = ground.resize((ICON_SIZE, ICON_SIZE), Image.NEAREST)
    icon.alpha_composite(render.resize((ICON_SIZE, ICON_SIZE), Image.LANCZOS))
    icon.save(ICONS / "opence-icon.png", optimize=True)
    print(f"{ICONS.relative_to(ROOT)}: opence-icon.png, opence-icon-render.png")


if __name__ == "__main__":
    page_logo()
    menu_logo()
    loading_picture()
    icon_artwork()
    import app_icon

    app_icon.main()
