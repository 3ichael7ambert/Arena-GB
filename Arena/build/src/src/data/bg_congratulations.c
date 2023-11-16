#pragma bank 255

// Background: congratulations

#include "gbs_types.h"
#include "data/bg_congratulations_tileset.h"
#include "data/bg_congratulations_tilemap.h"

BANKREF(bg_congratulations)

const struct background_t bg_congratulations = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_congratulations_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_congratulations_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
