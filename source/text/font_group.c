/*
FONT_GROUP.C

symbols in this file:
0018C840 0070:
	_font_get_character_by_ascii_code (0000)
*/

/* ---------- headers */

#include "cseries.h"
#include "font_group.h"

/* ---------- constants */

/* port: a letter with a mark, as drawn by the high-res text
(font_character_marked_letter): the Latin-1 letters, and the fonts whose
characters are kept at once */
enum
{
	FIRST_MARKED_LETTER = 0xC0,
	NUMBER_OF_MARKED_LETTERS = 0x40,
	MAXIMUM_MARKED_LETTER_FONTS = 8,
	FONT_CHARACTER_WIDTH_OFFSET = 2
};

/* ---------- macros */

/* ---------- structures */

/* ---------- prototypes */

int text_hires_enabled(void); /* port: port/linux/src/text_hires.c */

static struct font_character *font_character_marked_letter(
	struct font_header *font,
	word character_code,
	struct font_character *character);

/* ---------- globals */

/* port: each Latin-1 letter with a mark's plain letter (0: not one) */
static char const marked_letter_plain[NUMBER_OF_MARKED_LETTERS] =
{
	'A', 'A', 'A', 'A', 'A', 'A', 0, 'C', 'E', 'E', 'E', 'E', 'I', 'I', 'I', 'I',
	0, 'N', 'O', 'O', 'O', 'O', 'O', 0, 'O', 'U', 'U', 'U', 'U', 'Y', 0, 0,
	'a', 'a', 'a', 'a', 'a', 'a', 0, 'c', 'e', 'e', 'e', 'e', 'i', 'i', 'i', 'i',
	0, 'n', 'o', 'o', 'o', 'o', 'o', 0, 'o', 'u', 'u', 'u', 'u', 'y', 0, 'y',
};

/* port: the characters given a plain letter's width, each font's own (the
tags' are left as they are) */
static struct
{
	struct font_header *font;
	byte characters[NUMBER_OF_MARKED_LETTERS][FONT_CHARACTER_SIZE];
} marked_letter_fonts[MAXIMUM_MARKED_LETTER_FONTS];
static short marked_letter_next_font;

/* ---------- public code */

struct font_character *font_get_character_by_ascii_code(
	struct font_header *font,
	word character_code)
{
	struct font_character_table *character_table;
	struct font_character *character = NULL;

	/* port: no glyph for a character past the font's tables, a table that
	isn't a whole 256 entries, or an entry past the font's characters (the
	map's font, and any string's characters, e.g. a player's name) */
	if (!VALID_INDEX(character_code >> 8, font->character_tables.count))
		return NULL;

	character_table = TAG_BLOCK_GET_ELEMENT(
		&font->character_tables,
		character_code >> 8,
		struct font_character_table);

	if (character_table->character_indices.count == 256)
	{
		short *character_index = TAG_BLOCK_GET_ELEMENT(&character_table->character_indices, character_code & 0xFF, short);

		if (VALID_INDEX(*character_index, font->characters.count))
		{
			character = tag_block_get_element_with_size(
				&font->characters,
				*character_index,
				FONT_CHARACTER_SIZE);
		}
	}

	/* port: with the high-res text, a letter with a mark is as wide as its
	plain letter (font_character_marked_letter) */
	if (character && character_code >= FIRST_MARKED_LETTER &&
		character_code < FIRST_MARKED_LETTER + NUMBER_OF_MARKED_LETTERS && text_hires_enabled())
	{
		character = font_character_marked_letter(font, character_code, character);
	}

	return character;
}

/* ---------- private code */

/* port: the character with its plain letter's width, for the high-res text.
A font made for English gives its letters with marks widths of their own
that nothing ever showed wrong (the Xbox's ui\small_ui: 14 for a-acute where
a is 8, 7 for A-acute where A is 10), and the high-res text, which draws the
letter in the middle of the font's width, then leaves a gap beside it or
runs it into the next. A letter and its marked forms are one width in a
font that has them right, so this changes nothing there. The font's own
character is not written: a copy is given, kept for each font. */
static struct font_character *font_character_marked_letter(
	struct font_header *font,
	word character_code,
	struct font_character *character)
{
	char plain_code = marked_letter_plain[character_code - FIRST_MARKED_LETTER];
	struct font_character *plain;
	byte *copy;
	short slot;

	if (!plain_code)
		return character;
	plain = font_get_character_by_ascii_code(font, (word)plain_code);
	if (!plain || *(short *)((byte *)plain + FONT_CHARACTER_WIDTH_OFFSET) ==
		*(short *)((byte *)character + FONT_CHARACTER_WIDTH_OFFSET))
	{
		return character;
	}
	for (slot = 0; slot < MAXIMUM_MARKED_LETTER_FONTS && marked_letter_fonts[slot].font != font; slot++)
		;
	if (slot == MAXIMUM_MARKED_LETTER_FONTS)
	{
		slot = marked_letter_next_font;
		marked_letter_next_font = (short)((marked_letter_next_font + 1) % MAXIMUM_MARKED_LETTER_FONTS);
		marked_letter_fonts[slot].font = font;
	}
	copy = marked_letter_fonts[slot].characters[character_code - FIRST_MARKED_LETTER];
	csmemcpy(copy, character, FONT_CHARACTER_SIZE);
	*(short *)(copy + FONT_CHARACTER_WIDTH_OFFSET) = *(short *)((byte *)plain + FONT_CHARACTER_WIDTH_OFFSET);

	return (struct font_character *)copy;
}
