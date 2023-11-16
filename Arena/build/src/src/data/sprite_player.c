#pragma bank 255
// SpriteSheet: player

#include "gbs_types.h"
#include "data/sprite_player_tileset.h"

BANKREF(sprite_player)

#define SPRITE_1_STATE_DEFAULT 0

const metasprite_t sprite_player_metasprite_0[]  = {
    { 2, 11, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 }, { 16, -8, 28, 0 }, { -16, 0, 30, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_1[]  = {
    { 3, 10, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_2[]  = {
    { 3, 14, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 }, { 16, -8, 16, 0 }, { -16, 0, 18, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_3[]  = {
    { 3, -2, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_4[]  = {
    { 2, 8, 48, 0 }, { -16, 0, 50, 0 }, { 16, -8, 52, 0 }, { -16, 0, 54, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_5[]  = {
    { 3, 10, 32, 0 }, { -16, 0, 2, 0 }, { 16, -8, 34, 0 }, { -16, 0, 36, 0 }, { 16, -8, 38, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_6[]  = {
    { 3, 9, 40, 0 }, { -16, 0, 42, 0 }, { 16, -8, 44, 0 }, { -16, 0, 46, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_7[]  = {
    { 2, 6, 12, 0 }, { -16, 0, 14, 0 }, { 16, -8, 16, 0 }, { -16, 0, 18, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_metasprite_8[]  = {
    { 3, -2, 32, 32 }, { -16, 0, 2, 32 }, { 16, 8, 34, 32 }, { -16, 0, 36, 32 }, { 16, 8, 38, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_player_metasprites[] = {
    sprite_player_metasprite_0,
    sprite_player_metasprite_1,
    sprite_player_metasprite_2,
    sprite_player_metasprite_3,
    sprite_player_metasprite_0,
    sprite_player_metasprite_4,
    sprite_player_metasprite_1,
    sprite_player_metasprite_5,
    sprite_player_metasprite_6,
    sprite_player_metasprite_7,
    sprite_player_metasprite_3,
    sprite_player_metasprite_8
};

const struct animation_t sprite_player_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 6,
        .end = 7
    },
    {
        .start = 8,
        .end = 9
    },
    {
        .start = 10,
        .end = 11
    }
};

const UWORD sprite_player_animations_lookup[] = {
    SPRITE_1_STATE_DEFAULT
};

const struct spritesheet_t sprite_player = {
    .n_metasprites = 12,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_player_metasprites,
    .animations = sprite_player_animations,
    .animations_lookup = sprite_player_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_player_tileset),
    .cgb_tileset = { NULL, NULL }
};
