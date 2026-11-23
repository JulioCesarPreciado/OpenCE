# Pendientes y límites de este fork

Notas de trabajo del fork. No son parte del proyecto original (OpenCE).

## Plan

1. ~~Página de entrada minimalista, con entrada directa al servidor.~~ Hecho.
2. ~~Menú del juego sin campaña ni co-op.~~ Hecho.
3. Servidor dedicado en un VPS Linux x86 (Docker), con rotación de Slayer,
   Team Slayer e Infection y mapas custom.
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
- `manifest.webmanifest` todavía dice "OpenCE" como nombre de la aplicación.
- "Arena" es un nombre provisional: se cambia en
  `port/web/site/site-config.js`.
- Confirmar, al montar el servidor, si su invitación se mantiene igual entre
  reinicios. De eso depende que el `server` fijo de `site-config.js` sirva.

### Campaña

- Importar solo los mapas multijugador. De los 1.86 GB que se copian del
  disco, la campaña ocupa unos 1.56 GB (10 mapas) y el multijugador unos
  0.3 GB (13 mapas y `ui.map`). El encabezado de los mapas de Xbox no dice
  de qué tipo es cada uno, así que habría que distinguirlos por nombre, y
  probar que el juego arranca y aloja partidas sin los mapas de campaña.
- La campaña sigue alcanzable por la consola del juego (`map_name`) mientras
  sus mapas estén importados.

### Menús

- El logotipo del menú principal y el nombre del juego vienen de los datos
  del disco, no de este repositorio.
- La pantalla Multiplayer muestra un "PLACE HOLDER" en el panel de la
  derecha (ya estaba así en el proyecto original).

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

```sh
source ~/emsdk/emsdk_env.sh
ninja web                    # build/web/site/
python tools/web_serve.py    # http://localhost:8000/
```

Instalado fuera del repositorio: `ninja` (Homebrew), Emscripten 6.0.10 en
`~/emsdk`, y Chromium de Playwright en `~/Library/Caches/ms-playwright`.
