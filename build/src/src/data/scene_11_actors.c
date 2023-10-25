#pragma bank 255

// Scene: Arena9
// Actors

#include "gbs_types.h"
#include "data/sprite_npc003.h"
#include "data/actor_9_update.h"
#include "data/sprite_bullet.h"

BANKREF(scene_11_actors)

const struct actor_t scene_11_actors[] = {
    {
        // Monkey,
        .pos = {
            .x = 128 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_npc003),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = TRUE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_9_update),
        .reserve_tiles = 0
    },
    {
        // Bullet,
        .pos = {
            .x = 64 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = -1,
            .right = 15,
            .top = -16
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_bullet),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    }
};