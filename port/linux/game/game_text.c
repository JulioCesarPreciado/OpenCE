/*
GAME_TEXT.C

The game's own text in this fork's language, Spanish: the text a game shows
that the menus' files have not (port/assets/menus), the kill notices, the
scores, what was picked up, the pause menu, the errors. It is in the maps'
unicode string lists and, for the maps of the NTSC disc, in the game itself
(text_group.c's built-in multiplayer strings).

A text is looked up whole, by its characters, in a table of the English
texts with their Spanish ones (game_text_table.h, which tools/game_text.py
writes from the catalogs): never by its tag's name or its place in a list,
so a map's own words, or a list in another order, stay as they are, and the
same text is the same in every map, a Custom Edition one too. The game reads
many as the format of what it prints, and the tool lets a Spanish text into
the table only with its English one's conversions in the same order.

Once a map's tags are loaded, each string of its lists that the table has
points at the Spanish text instead: the list, its number of strings and
everything that holds them stay, and nothing is written to the map's file.
A mod's string list (mod_strings.c) is put over the result, as over the
map's. HUD messages (hud_message_text: "Hold X to pick up") are not string
lists and stay as the map has them.
*/

/* ---------- headers */

#include "cseries.h"
#include "cache/cache_files.h"
#include "tag_files/tag_groups.h"
#include "text/text_group.h"
#include "game_text.h"

/* ---------- structures */

struct game_text
{
	wchar_t const *text;
	wchar_t *translation;
};

/* ---------- globals */

#include "game_text_table.h"

/* ---------- private code */

/* how a text of at most `length` characters (ended sooner by a 0) is
ordered with one of the table's: by their characters' values */
static long text_compare(
	wchar_t const *text,
	long length,
	wchar_t const *other)
{
	long index;

	for (index = 0; ; index++)
	{
		unsigned short character = index < length ? (unsigned short)text[index] : 0;
		unsigned short other_character = (unsigned short)other[index];

		if (character != other_character)
		{
			return character < other_character ? -1 : 1;
		}
		if (!character)
		{
			return 0;
		}
	}
}

/* the Spanish text of a text of at most `length` characters, or NULL */
static wchar_t *text_find(
	wchar_t const *text,
	long length)
{
	long first = 0;
	long last = (long)NUMBEROF(game_texts) - 1;

	while (first <= last)
	{
		long middle = first + (last - first) / 2;
		long order = text_compare(text, length, game_texts[middle].text);

		if (!order)
		{
			return game_texts[middle].translation;
		}
		if (order < 0)
		{
			last = middle - 1;
		}
		else
		{
			first = middle + 1;
		}
	}

	return NULL;
}

/* ---------- public code */

/* a terminated text in Spanish, or itself */
wchar_t *game_text_translated(
	wchar_t *text)
{
	wchar_t *translation = text ? text_find(text, LONG_MAX) : NULL;

	return translation ? translation : text;
}

void game_text_tags_loaded(
	void)
{
	struct tag_iterator iterator;
	long tag_index;

	tag_iterator_new(&iterator, UNICODE_STRING_LIST_TAG);
	while ((tag_index = tag_iterator_next(&iterator)) != NONE)
	{
		struct string_list *list = tag_get(UNICODE_STRING_LIST_TAG, tag_index);
		long index;

		/* (a tag of another group, as tag_get gives it) */
		if (!list || tag_get_group_tag(tag_index) != UNICODE_STRING_LIST_TAG || !list->strings.address)
		{
			continue;
		}
		for (index = 0; index < list->strings.count; index++)
		{
			struct string_list_entry *entry = TAG_BLOCK_GET_ELEMENT(&list->strings, index, struct string_list_entry);
			/* (the string as it is got: ended at the latest in its last
			character, text_group.c) */
			long length = entry->string.size / (long)sizeof(wchar_t) - 1;
			wchar_t *translation = length > 0 && entry->string.address ?
				text_find(entry->string.address, length) : NULL;

			if (translation)
			{
				long translation_length = 0;

				while (translation[translation_length])
				{
					translation_length++;
				}
				entry->string.size = (translation_length + 1) * (long)sizeof(wchar_t);
				entry->string.address = translation;
				entry->string.file_offset = 0;
				entry->string.definition = NULL;
			}
		}
	}

	return;
}
