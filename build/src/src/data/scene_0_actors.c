#pragma bank 255

// Scene: Arena3
// Actors

#include "gbs_types.h"
#include "data/sprite_bullet.h"
#include "data/sprite_npc003.h"
#include "data/actor_10_update.h"
#include "data/actor_10_interact.h"
#include "data/sprite_hp.h"
#include "data/actor_4_update.h"

BANKREF(scene_0_actors)

const struct actor_t scene_0_actors[] = {
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
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // Monkey,
        .pos = {
            .x = 120 * 16,
            .y = 120 * 16
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
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_10_update),
        .script = TO_FAR_PTR_T(actor_10_interact),
        .reserve_tiles = 0
    },
    {
        // HP,
        .pos = {
            .x = 8 * 16,
            .y = 24 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_hp),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = TRUE,
        .persistent = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(actor_4_update),
        .reserve_tiles = 0
    }
};
