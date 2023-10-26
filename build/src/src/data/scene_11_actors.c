#pragma bank 255

// Scene: Arena9
// Actors

#include "gbs_types.h"
#include "data/sprite_bullet.h"
#include "data/sprite_npc003.h"
#include "data/actor_6_update.h"
#include "data/actor_6_interact.h"
#include "data/sprite_hp.h"
#include "data/actor_25_update.h"

BANKREF(scene_11_actors)

const struct actor_t scene_11_actors[] = {
    {
        // Bullet,
        .pos = {
            .x = 72 * 16,
            .y = 88 * 16
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
            .x = 192 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_6_update),
        .script = TO_FAR_PTR_T(actor_6_interact),
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
        .script_update = TO_FAR_PTR_T(actor_25_update),
        .reserve_tiles = 0
    }
};
