#pragma bank 255
// SpriteSheet: hp

#include "gbs_types.h"
#include "data/sprite_hp_tileset.h"

BANKREF(sprite_hp)

#define SPRITE_3_STATE_DEFAULT 0

const metasprite_t sprite_hp_metasprite_0[]  = {
    { 3, 18, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_hp_metasprite_1[]  = {
    { 3, 18, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 16, 0 }, { -16, 0, 18, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_hp_metasprite_2[]  = {
    { 3, 18, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 20, 0 }, { -16, 0, 22, 0 }, { 16, -8, 24, 0 }, { -16, 0, 26, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_hp_metasprite_3[]  = {
    { 3, 16, 28, 0 }, { -16, 0, 30, 0 }, { 16, -8, 32, 0 }, { -16, 0, 34, 0 }, { 16, -8, 32, 0 }, { -16, 0, 36, 0 }, { 16, -8, 0, 64 }, { -16, 0, 38, 0 },
    {metasprite_end}
};

const metasprite_t sprite_hp_metasprite_4[]  = {
    {metasprite_end}
};

const metasprite_t * const sprite_hp_metasprites[] = {
    sprite_hp_metasprite_0,
    sprite_hp_metasprite_1,
    sprite_hp_metasprite_2,
    sprite_hp_metasprite_3,
    sprite_hp_metasprite_4
};

const struct animation_t sprite_hp_animations[] = {
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 4,
        .end = 4
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    },
    {
        .start = 0,
        .end = 3
    }
};

const UWORD sprite_hp_animations_lookup[] = {
    SPRITE_3_STATE_DEFAULT
};

const struct spritesheet_t sprite_hp = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_hp_metasprites,
    .animations = sprite_hp_animations,
    .animations_lookup = sprite_hp_animations_lookup,
    .bounds = {
        .left = -8,
        .bottom = 7,
        .right = 23,
        .top = -24
    },
    .tileset = TO_FAR_PTR_T(sprite_hp_tileset),
    .cgb_tileset = { NULL, NULL }
};
