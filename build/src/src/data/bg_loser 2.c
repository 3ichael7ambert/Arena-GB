#pragma bank 255

// Background: loser

#include "gbs_types.h"
#include "data/bg_loser_tileset.h"
#include "data/bg_loser_tilemap.h"

BANKREF(bg_loser)

const struct background_t bg_loser = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_loser_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_loser_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
