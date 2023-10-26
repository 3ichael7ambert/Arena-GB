#pragma bank 255
// SpriteSheet: npc003

#include "gbs_types.h"
#include "data/sprite_npc003_tileset.h"

BANKREF(sprite_npc003)

#define SPRITE_2_STATE_DEFAULT 0

const metasprite_t sprite_npc003_metasprite_0[]  = {
    { 2, 13, 18, 0 }, { 0, -8, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_1[]  = {
    { 2, 12, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_2[]  = {
    { 4, 8, 10, 0 }, { -16, 0, 12, 0 }, { 16, -8, 14, 0 }, { -16, 0, 16, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_3[]  = {
    { 2, -4, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 }, { 16, 8, 8, 32 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_4[]  = {
    { 2, 10, 62, 0 }, { -16, 0, 64, 0 }, { 16, -8, 66, 0 }, { -16, 0, 68, 0 }, { 16, -8, 70, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_5[]  = {
    { 2, 7, 72, 0 }, { -16, 0, 74, 0 }, { 16, -8, 76, 0 }, { -16, 0, 78, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_6[]  = {
    { 0, 17, 28, 0 }, { 0, -8, 30, 0 }, { -16, 0, 32, 0 }, { 16, -8, 34, 0 }, { -16, 0, 36, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_7[]  = {
    { 1, 8, 38, 0 }, { -16, 0, 40, 0 }, { 16, -8, 42, 0 }, { -16, 0, 40, 32 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_8[]  = {
    { 2, 10, 44, 0 }, { -16, 0, 46, 0 }, { 16, -8, 48, 0 }, { -16, 0, 50, 0 }, { 16, -8, 52, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_9[]  = {
    { 1, 9, 54, 0 }, { -16, 0, 56, 0 }, { 16, -8, 58, 0 }, { -16, 0, 60, 0 },
    {metasprite_end}
};

const metasprite_t sprite_npc003_metasprite_10[]  = {
    { 0, -9, 28, 32 }, { 0, 8, 30, 32 }, { -16, 0, 32, 32 }, { 16, 8, 34, 32 }, { -16, 0, 36, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_npc003_metasprites[] = {
    sprite_npc003_metasprite_0,
    sprite_npc003_metasprite_1,
    sprite_npc003_metasprite_2,
    sprite_npc003_metasprite_3,
    sprite_npc003_metasprite_0,
    sprite_npc003_metasprite_4,
    sprite_npc003_metasprite_0,
    sprite_npc003_metasprite_5,
    sprite_npc003_metasprite_1,
    sprite_npc003_metasprite_6,
    sprite_npc003_metasprite_1,
    sprite_npc003_metasprite_6,
    sprite_npc003_metasprite_2,
    sprite_npc003_metasprite_7,
    sprite_npc003_metasprite_8,
    sprite_npc003_metasprite_9,
    sprite_npc003_metasprite_3,
    sprite_npc003_metasprite_10,
    sprite_npc003_metasprite_3,
    sprite_npc003_metasprite_10
};

const struct animation_t sprite_npc003_animations[] = {
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
        .end = 7
    },
    {
        .start = 8,
        .end = 11
    },
    {
        .start = 12,
        .end = 15
    },
    {
        .start = 16,
        .end = 19
    }
};

const UWORD sprite_npc003_animations_lookup[] = {
    SPRITE_2_STATE_DEFAULT
};

const struct spritesheet_t sprite_npc003 = {
    .n_metasprites = 20,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_npc003_metasprites,
    .animations = sprite_npc003_animations,
    .animations_lookup = sprite_npc003_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_npc003_tileset),
    .cgb_tileset = { NULL, NULL }
};
