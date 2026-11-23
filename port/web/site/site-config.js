/*
SITE-CONFIG.JS

What this copy of the site calls itself and the game its Play button joins
(app.js). The page works with every value left as it is.
*/

'use strict';

window.SiteConfig = {
  // the page's title and the line under it
  name: 'OpenCE Arena',
  // the picture shown as the title, in the site's folder (tools/site_logo.py
  // makes it); empty: the name in the title's font
  logo: 'logo.png',
  tagline: 'Partidas privadas entre amigos.',
  // the server Play joins: its invite, 64 hex digits or a whole link that
  // ends with them (the server's log and its web page show it). Empty: Play
  // opens the game's own menus. An address with ?join= or ?room= wins.
  server: '',
  // the server's name, as the page says it
  serverName: '',
  // false: the disc image's campaign levels are not copied, only its
  // multiplayer maps and the menus' (about 300 MB instead of 1.9 GB). A
  // browser that already has them keeps them until its maps are deleted.
  campaign: false,
  // false: the disc's loading screen picture is not copied either; this
  // game draws its own (port/assets/logo/loading.tga)
  discLoadingPicture: false,
  // where the source of this copy is (the AGPL asks that players can get it)
  source: 'https://github.com/JulioCesarPreciado/OpenCE',
};
