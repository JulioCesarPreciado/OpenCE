#!/bin/sh
# The local dedicated server (compose.yaml beside this file):
#
#   deploy/local/server.sh up      start it, then print the link that joins it
#   deploy/local/server.sh link    print that link again, and the admin page's password
#   deploy/local/server.sh logs    follow its log
#   deploy/local/server.sh down    stop it (its settings stay in the volume)
#
# The server makes a new invite each time it starts, so the link changes
# with every up.
set -eu

here=$(cd "$(dirname "$0")" && pwd)
compose="docker compose -f $here/compose.yaml"
site=${ARENA_SITE:-http://localhost:8000/}

address() {
  # (the address of the interface the default route leaves by)
  if command -v ipconfig >/dev/null 2>&1; then
    ipconfig getifaddr "$(route -n get default 2>/dev/null | awk '/interface:/ {print $2}')" 2>/dev/null
  else
    ip -4 route get 1.1.1.1 2>/dev/null | awk '{for (i = 1; i < NF; i++) if ($i == "src") print $(i + 1)}'
  fi
}

link() {
  logs=$($compose logs --no-log-prefix server 2>&1)
  invite=$(printf '%s\n' "$logs" | grep -o 'invite: halo://join/[0-9a-f]\{64\}' | tail -1 | grep -o '[0-9a-f]\{64\}' || true)
  if [ -z "$invite" ]; then
    echo "The server has printed no invite yet: deploy/local/server.sh logs" >&2
    return 1
  fi
  echo "Join:       ${site}?join=${invite}"
  echo "            (then Multiplayer, Join Game, LAN in the game's menus)"
  echo "Admin page: http://127.0.0.1:8080/"
  printf '%s\n' "$logs" | grep -o "admin password: .*" | tail -1 | sed 's/^admin password: /Password:   /' || true
}

# (compose.yaml needs the address to read the file at all, whatever the command)
HALO_LOCAL_ADDRESS=${HALO_LOCAL_ADDRESS:-$(address || true)}
export HALO_LOCAL_ADDRESS

case "${1:-}" in
  up)
    if [ ! -f "$here/../../assets/maps/ui.map" ]; then
      echo "No game data: node tools/extract_multiplayer_maps.mjs <disc image>" >&2
      exit 2
    fi
    if [ -z "$HALO_LOCAL_ADDRESS" ]; then
      echo "This computer has no network address: set HALO_LOCAL_ADDRESS" >&2
      exit 2
    fi
    # (recreated, so that a new address or rotation is taken)
    $compose up -d --force-recreate
    tries=0
    until $compose logs --no-log-prefix server 2>&1 | grep -q 'server: ready'; do
      tries=$((tries + 1))
      if [ "$tries" -gt 60 ]; then
        echo "The server did not get ready: deploy/local/server.sh logs" >&2
        exit 1
      fi
      sleep 2
    done
    link
    ;;
  link | logs | down)
    # (off the network, these still work on the server that runs)
    HALO_LOCAL_ADDRESS=${HALO_LOCAL_ADDRESS:-unused}
    case "$1" in
      link) link ;;
      logs) $compose logs -f server ;;
      down) $compose down ;;
    esac
    ;;
  *)
    echo "usage: deploy/local/server.sh up|link|logs|down" >&2
    exit 2
    ;;
esac
