#pragma bank 255

// Background: arena2

#include "gbs_types.h"
#include "data/bg_arena1_copy_tileset.h"
#include "data/bg_arena1_copy_tilemap.h"

BANKREF(bg_arena1_copy)

const struct background_t bg_arena1_copy = {
    .width = 32,
    .height = 32,
    .tileset = TO_FAR_PTR_T(bg_arena1_copy_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_arena1_copy_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
