# Lucide icons

Twenty icons of [Lucide](https://lucide.dev) 1.53.0 (ISC licence: `LICENSE`),
as `icons/` has them at the `1.53.0` tag of
https://github.com/lucide-icons/lucide:

- `volume-2.svg`: voice chat's speaker, of a player who talks;
- `volume-x.svg`: ... of a player muted;
- `triangle-alert.svg`: the Mods menu's sign of a mod that loads on the
  wrong side of a mod it asks to load before or after;
- `circle-x.svg`: ... of a mod that cannot be played, or that another mod
  says it cannot be played with;
- `globe.svg`, `network.svg`, `link.svg`, `radio-tower.svg`, `router.svg`,
  `sliders-horizontal.svg`: the pictures of Multiplayer's rows (Server
  Browser, LAN, Direct Link, Create's Internet and LAN, Edit Gametypes);
- `square-pen.svg`, `crosshair.svg`, `car.svg`, `users.svg`, `save.svg`:
  ... of the gametype editor's (Change Name, Item, Vehicle and Teamplay
  Options, Save Changes);
- `keyboard.svg`, `mouse.svg`, `monitor.svg`, `wifi.svg`, `info.svg`, and
  `volume-2.svg` again: ... of the profile's settings (Controls, Mouse,
  Video and Network Setup, About, and Audio Setup).

`tools/ce_menus.py` draws the first two, white, as the menus' bitmap
`voice/speaker` (port/linux/game/network_voice.c tints it), and the others,
amber and red, as `mods/status` and the smaller `mods/status_small`
(`tools/port_settings.py`). `tools/menu_pictures.py` draws the rows'
pictures, in the menus' blue, where the PC version's have no redraw.
Credited in `AUTHORS.md`.
