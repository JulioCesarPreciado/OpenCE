/*
GAME_TEXT.H

The game's own text in this fork's language (game_text.c).
*/

#ifndef __GAME_TEXT_H
#define __GAME_TEXT_H
#pragma once

/* ---------- headers */

#include "cseries.h"

/* ---------- prototypes/GAME_TEXT.C */

/* the game's (text_group.c, its built-in strings) */
wchar_t *game_text_translated(wchar_t *text);
/* the map's (mods.c, mods_tags_loaded) */
void game_text_tags_loaded(void);

#endif // __GAME_TEXT_H
