#pragma bank 2

//AUTOGENERATED FILE FROM png2asset

#include <stdint.h>
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>

BANKREF(sprArrow)

const palette_color_t sprArrow_palettes[4] = {
	RGB8(251, 242, 54), RGB8(132, 126, 135), RGB8(34, 32, 52), RGB8(8, 2, 0)
};

const uint8_t sprArrow_tiles[48] = {
	0x00,0x00,0x30,0x00,0x70,0x00,0xf0,0x0f,0x70,0x8f,0x30,0x40,0x00,0x30,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x1f,0x00,0x3e,0x00,0x00,0xfc,0x3c,0xc0,0x3e,0x00,0x1f,0x00,0x00,0x00
};

const metasprite_t sprArrow_metasprite0[] = {
	METASPR_ITEM(-4, -16, 0, 0), METASPR_ITEM(0, 8, 1, 0), METASPR_ITEM(0, 8, 1, 0), METASPR_ITEM(0, 8, 2, 0), METASPR_TERM
};

const metasprite_t* const sprArrow_metasprites[1] = {
	sprArrow_metasprite0
};
