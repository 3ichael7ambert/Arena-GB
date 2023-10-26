#pragma bank 255

// Background: arena4

#include "gbs_types.h"
#include "data/bg_arena2_copy_8_tileset.h"
#include "data/bg_arena2_copy_8_tilemap.h"

BANKREF(bg_arena2_copy_8)

const struct background_t bg_arena2_copy_8 = {
    .width = 32,
    .height = 32,
    .tileset = TO_FAR_PTR_T(bg_arena2_copy_8_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_arena2_copy_8_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
