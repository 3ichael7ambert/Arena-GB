#pragma bank 255

// Background: arena1

#include "gbs_types.h"
#include "data/bg_arena2_copy_8_tileset.h"
#include "data/bg_arena1_tilemap.h"

BANKREF(bg_arena1)

const struct background_t bg_arena1 = {
    .width = 32,
    .height = 32,
    .tileset = TO_FAR_PTR_T(bg_arena2_copy_8_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_arena1_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
