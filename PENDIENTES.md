# Pendientes y límites de este fork

Notas de trabajo del fork. No son parte del proyecto original (OpenCE).

## Plan

1. ~~Página de entrada minimalista, con entrada directa al servidor.~~ Hecho.
2. ~~Menú del juego sin campaña ni co-op.~~ Hecho.
   ~~Importar solo los mapas multijugador.~~ Hecho.
3. Servidor dedicado en un VPS Linux x86 (Docker), con rotación de Slayer,
   Team Slayer e Infection y mapas custom. Ensayado en local
   (`deploy/local`); falta un VPS personal: no usar `pgm-apps`, que aloja
   sistemas de trabajo.
4. Servicio de estadísticas y rangos, mostrados en la página.
5. Decidir si los colores de armadura libres justifican romper la
   compatibilidad de red con el proyecto original.

Fuera del plan por ahora: armaduras por jugador, rangos dentro de la
partida, assets propios, motor propio.

## Pendientes

### Página de entrada

- Los mensajes de error de los importadores (disco, mapas de CE, MCC) siguen
  en inglés: `xiso-worker.js`, `ce-import-worker.js`, `mcc-import-worker.js`,
  `map-import-storage.js`.
- Falta correr las tres pruebas de navegador del proyecto, cuyos textos
  esperados se ajustaron al español: `port/web/tests/smoke.mjs`, `rooms.mjs`
  e `internet.mjs`.
- `servers.js` (la lista de servidores públicos) sigue en el sitio aunque la
  página ya no lo carga. Quitarlo, con su prueba, o volver a usarlo.
- El sitio se llama "OpenCE Arena" (`port/web/site/site-config.js`), con el
  logo propio en `port/assets/logo`. `python tools/site_logo.py` vuelve a
  generar, a partir de esos dos archivos, el logo de la página, el del menú
  principal y todos los iconos (web, ventana de escritorio, `halo.exe` y
  Android).
- Los iconos de escritorio y Android se generaron pero no se vieron en esos
  builds: no se compilaron en esta Mac.
- La app de Android y la ventana de escritorio se llaman "OpenCE Arena".
  Tampoco se vieron en esos builds.
- **Jugar** deja al jugador dentro de la partida. La página lee la
  invitación vigente de `server.json` (lo escribe `deploy/local/server.sh up`
  al arrancar el servidor) y el juego recorre solo sus menús hasta la
  partida (`network.join_invite_at_start`, apagado por defecto; la página lo
  enciende). Un jugador sin perfil pasa primero por la pantalla de nombre.
- En el VPS hará falta lo mismo que hace `server.sh`: escribir `server.json`
  en la carpeta del sitio cada vez que el servidor arranque.
- Si el servidor está apagado y `server.json` sigue ahí, el jugador queda en
  la pantalla Enlace directo con "Buscando la partida del servidor..." y, a
  los 20 segundos, "El servidor no responde. Intenta más tarde.".
- Un jugador nuevo escribe su nombre en la página (hasta 11 caracteres) y el
  juego crea su perfil con él (`game.new_profile_name`), sin su pantalla de
  nombre. Con un perfil ya creado la página muestra "Jugador" y no pregunta;
  el nombre se cambia después en los ajustes del juego.

### Español

- Los textos de los menús están en español: 1,556 textos traducidos en
  `port/assets/menus/language/es.json`, que `tools/menu_language.py` aplica
  sobre los archivos de menú. Los nombres propios (mapas, tipos de juego) y
  los textos de la campaña se dejaron en inglés a propósito.
- Solo se revisaron en pantalla Multiplayer, los ajustes del perfil y Video.
  El resto se comprobó por reglas (mismos `%s`, mismas líneas, ancho parecido
  al original), no viéndolo: puede haber textos que se salgan de su caja.
- Los títulos de las pantallas y los ítems del menú principal, que son
  imágenes, también están en español: `python tools/menu_titles.py` los
  dibuja con la fuente OpenCE (26 títulos, 4 ítems y los 9 títulos propios
  del port). Para cambiar uno se edita la tabla de ese archivo. La imagen
  de carga dice "CARGANDO...".
- Los textos que escribe el código están en español: la sala, las
  votaciones, el chat, los nombres de las acciones y los avisos (unos 100,
  en `menu_functions.c`, `network_votekick.c`, `network_chat.c`,
  `menu_button_glyphs.c`, `touch_postgame.c` y `mcc_ui.c`). Van escritos en
  el propio código, con las letras acentuadas como escapes (`\x00F3`).
- Las letras con acento se dibujaban con un hueco al lado en la letra
  pequeña ("m á s"): la fuente pequeña del disco trae mal su ancho. Con el
  texto en alta resolución, una letra con acento toma ahora el ancho de su
  letra base (`source/text/font_group.c`).
- Los textos dentro de la partida están en español: avisos de bajas,
  marcador, lo que se recoge, menú de pausa, errores y el teclado de la
  pantalla de nombre. No es un mod: en el disco NTSC los avisos de bajas y
  el marcador no están en los mapas sino escritos en el juego, donde un mod
  no llega. El juego trae una tabla inglés → español (1,303 textos) y, al
  cargar cada mapa, muestra en español cada texto que la tabla tiene. Busca
  el texto completo, no su lugar ni su tag, así que también sirve para los
  mapas de Custom Edition que traen los mismos textos, y un texto propio de
  un mapa se queda como está.
- Para cambiar o agregar una traducción: editar
  `port/assets/game_text/es.json` (o la sección `menus` de
  `port/assets/menus/language/es.json`), correr `python tools/game_text.py`
  y volver a compilar. La herramienta rechaza una traducción que no tenga
  los mismos `%s` y `%d`, en el mismo orden, que su texto en inglés.
- De eso solo se vio en pantalla el marcador y el menú de pausa. Los avisos
  de bajas, lo recogido y los errores salen por la misma vía, pero no se
  vieron: hacen falta dos jugadores.
- Las cajas no hacen salto de línea: un texto más largo que el original se
  corta ("=CANCELAR" se veía "=CANCEL"; por eso dice "=VOLVER", y "LEAVE
  GAME" quedó en "ABANDONAR").
- Los renglones del marcador que escribe el código (tiempo restante,
  votaciones, menú al elegir a un jugador) también están en español
  (`source/game/game_engine.c`).
- Siguen en inglés: los avisos del HUD para recoger o subir ("Hold X to
  pick up", "Press X to enter the driver seat": no son listas de texto, y
  con ellos los nombres de botones, asientos y vehículos), los nombres de
  los tipos de juego, los títulos de la campaña (no se alcanzan), los
  lugares del 17 en adelante en el marcador ("17th") y los errores de los
  importadores de la página.
- El servidor dedicado local usa la imagen del proyecto original: lo que
  él escriba en su registro o su página sigue en inglés.
- Al crear una partida, el selector de mapas ya no ofrece los niveles de
  campaña ni los mapas de un jugador (`network.host_campaign`, apagado en
  este fork; el proyecto original siempre los ofrece).

### Campaña

- La página ya solo copia los mapas multijugador (`campaign: false` en
  `site-config.js`): 297 MB en lugar de 1.86 GB. Los niveles de campaña se
  reconocen por nombre (`a10.map` … `d40.map`, la lista del propio juego),
  porque el encabezado de los mapas de Xbox no dice de qué tipo son.
- Un navegador que importó antes de este cambio conserva los mapas de
  campaña hasta que se borren (Más opciones, Datos guardados, Borrar los
  mapas) y se vuelva a importar.
- El servidor dedicado lee una carpeta `maps/` normal: hay que no copiarle
  los diez mapas de campaña a mano.
- El código de la campaña sigue en el juego; sin sus mapas no hay forma de
  entrar a ella.

### Menús

- El menú principal dibuja el logo propio y la pregunta al salir dice
  "exit OpenCE Arena". El generador de menús (`tools/ce_menus.py`,
  `tools/port_settings.py`) ya conoce ambos; sus funciones, corridas por
  separado, dan exactamente lo que está en los archivos.
- Los textos de los menús que nombraban el juego dicen "OpenCE Arena"
  (`STRING_CHANGES` en `tools/port_settings.py`). Quedan con el nombre
  original los de la campaña (nombre de un nivel y tres descripciones), que
  no se alcanzan, y dos que nombran los mapas de Workshop de Steam.
- La pantalla de carga usa una imagen propia incrustada en el juego
  (`port/assets/logo/loading.tga`); el juego ya no lee la del disco y la
  página ya no la copia. En el navegador esa pantalla no llega a verse: solo
  aparece mientras un mapa se copia a la caché, y ahí el navegador no
  muestra cuadros. En escritorio y Android sí se vería, sin probar.
- Los tres importadores de disco copian lo mismo: `ui.map` y los mapas
  multijugador, sin la campaña ni la imagen de carga del disco. El de
  escritorio (`xiso.c`) y el de Android (`XisoExtractor.java`) lo tienen
  fijo en el código; el de la página lo toma de `site-config.js`.
  `tools/test_xiso_parity.py` comprueba que los tres coinciden. Los de
  escritorio y Android no se compilaron ni se corrieron en esos builds.
- Ya no hay imágenes de relleno ("PLACE HOLDER"): las 13 que había, y tres
  más que le faltaban a la pantalla Multiplayer, son iconos de Lucide en el
  azul de los menús. `python tools/menu_pictures.py` los vuelve a dibujar
  (necesita `rsvg-convert`, Pillow, NumPy y SciPy); para cambiar un icono se
  edita la tabla de ese archivo. Suman unos 3 MB al juego.
- Para sustituir un icono por arte propio: poner el SVG (512×256) en
  `port/assets/menus/own/`, con el nombre del cuadro, y correr la
  herramienta.

## Límites conocidos

- Cada jugador necesita su propia copia del juego. El sitio no sirve mapas y
  no deben subirse al repositorio ni al servidor.
- No hay relay: dos redes que no dejan pasar una conexión directa (WebRTC)
  no pueden jugar juntas.
- El servidor dedicado es el build de Linux x86 de 32 bits: no corre en una
  Mac con Apple Silicon ni en un VPS ARM.
- Los cambios de menú se hicieron a mano en los XML y también en los
  generadores (`tools/ce_menus.py`, `tools/port_settings.py`). Los
  generadores no se pudieron correr: necesitan los tags de la versión de PC.
- El código de la campaña no se puede separar del motor: es el mismo código
  (IA, scripts, físicas) que usa el multijugador.
- Cualquier cambio en lo que las máquinas se envían rompe la compatibilidad
  con los builds oficiales de OpenCE.
- Licencia AGPL: quien juegue en este sitio debe poder obtener el código
  fuente de este fork.
- `tools/test_web_build.py` tiene una prueba (`test_the_sockets_inside_the_page`)
  que falla en macOS con o sin los cambios de este fork.

## Entorno local (macOS)

El sitio:

```sh
source ~/emsdk/emsdk_env.sh
ninja web                    # build/web/site/
python tools/web_serve.py    # http://localhost:8000/
```

El servidor dedicado, en un contenedor (Docker Desktop):

```sh
node tools/extract_multiplayer_maps.mjs <imagen de disco>   # una vez: assets/maps
deploy/local/server.sh up      # lo arranca y da el enlace para entrar
deploy/local/server.sh link    # el enlace otra vez, y la contraseña del panel
deploy/local/server.sh down
```

- En una Mac con Apple Silicon corre emulado. Con un jugador usó cerca del
  30 % de un núcleo y 160 MB de memoria.
- Los mapas de Custom Edition no funcionan en el servidor emulado (su
  ventana de memoria está ocupada): hay que probarlos en un servidor x86.
- La rotación se cambia con `HALO_SERVER_ROTATION` al arrancar, por ejemplo
  `HALO_SERVER_ROTATION="wizard:slayer, hangemhigh:infection"`.
- La imagen es la del proyecto original, fijada al build de la misma
  versión de red que este fork (44). Si el fork cambia lo que las máquinas
  se envían, hará falta una imagen propia.
- Otra computadora de la misma red puede entrar si abre el sitio servido
  desde esta Mac por https o con las cabeceras de aislamiento; no se probó.

Instalado fuera del repositorio: `ninja` (Homebrew), Emscripten 6.0.10 en
`~/emsdk`, y Chromium de Playwright en `~/Library/Caches/ms-playwright`.
