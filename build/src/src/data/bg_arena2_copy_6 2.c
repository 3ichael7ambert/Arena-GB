#pragma bank 255

// Background: arena6

#include "gbs_types.h"
#include "data/bg_arena2_copy_6_tileset.h"
#include "data/bg_arena2_copy_6_tilemap.h"

BANKREF(bg_arena2_copy_6)

const struct background_t bg_arena2_copy_6 = {
    .width = 32,
    .height = 32,
    .tileset = TO_FAR_PTR_T(bg_arena2_copy_6_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_arena2_copy_6_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
