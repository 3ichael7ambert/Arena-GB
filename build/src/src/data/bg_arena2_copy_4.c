#pragma bank 255

// Background: arena8

#include "gbs_types.h"
#include "data/bg_arena2_copy_4_tileset.h"
#include "data/bg_arena2_copy_4_tilemap.h"

BANKREF(bg_arena2_copy_4)

const struct background_t bg_arena2_copy_4 = {
    .width = 32,
    .height = 32,
    .tileset = TO_FAR_PTR_T(bg_arena2_copy_4_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_arena2_copy_4_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
