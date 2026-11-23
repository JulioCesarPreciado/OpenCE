/*
SITE-CONFIG.JS

What this copy of the site calls itself and the game its Play button joins
(app.js). The page works with every value left as it is.
*/

'use strict';

window.SiteConfig = {
  // the page's title and the line under it
  name: 'Arena',
  tagline: 'Partidas privadas entre amigos.',
  // the server Play joins: its invite, 64 hex digits or a whole link that
  // ends with them (the server's log and its web page show it). Empty: Play
  // opens the game's own menus. An address with ?join= or ?room= wins.
  server: '',
  // the server's name, as the page says it
  serverName: '',
  // where the source of this copy is (the AGPL asks that players can get it)
  source: 'https://github.com/JulioCesarPreciado/OpenCE',
};
