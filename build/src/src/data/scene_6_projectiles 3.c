#pragma bank 255

// Scene: Arena5
// Projectiles

#include "gbs_types.h"
#include "data/sprite_bullet.h"
#include "data/sprite_bullet.h"

BANKREF(scene_6_projectiles)

const struct projectile_def_t scene_6_projectiles[] = {
    {
        // Projectile 0,
        .sprite = TO_FAR_PTR_T(sprite_bullet),
        .move_speed = 32,
        .life_time = 60,
        .collision_group = COLLISION_GROUP_1,
        .collision_mask = COLLISION_GROUP_1 | COLLISION_GROUP_2 | COLLISION_GROUP_3,
        .bounds = {
            .left = 0,
            .bottom = -1,
            .right = 15,
            .top = -16
        },
        .anim_tick = 15,
        .animations = {
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 1,
                .end = 1
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 2,
                .end = 2
            }
        },
        .initial_offset = 0
    },
    {
        // Projectile 1,
        .sprite = TO_FAR_PTR_T(sprite_bullet),
        .move_speed = 32,
        .life_time = 60,
        .collision_group = COLLISION_GROUP_3,
        .collision_mask = COLLISION_GROUP_PLAYER,
        .bounds = {
            .left = 0,
            .bottom = -1,
            .right = 15,
            .top = -16
        },
        .anim_tick = 255,
        .animations = {
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 1,
                .end = 1
            },
            {
                .start = 0,
                .end = 0
            },
            {
                .start = 2,
                .end = 2
            }
        },
        .initial_offset = 0
    }
};