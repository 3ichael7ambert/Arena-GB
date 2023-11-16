#pragma bank 255

// Scene: Arena1
// Actors

#include "gbs_types.h"
#include "data/sprite_npc003.h"
#include "data/actor_19_update.h"
#include "data/actor_19_interact.h"
#include "data/sprite_hp.h"
#include "data/actor_21_update.h"
#include "data/sprite_bullet.h"
#include "data/actor_2_update.h"
#include "data/sprite_npc003.h"
#include "data/actor_9_update.h"
#include "data/actor_9_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_40_update.h"
#include "data/actor_40_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_50_update.h"
#include "data/actor_50_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_60_update.h"
#include "data/actor_60_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_70_update.h"
#include "data/actor_70_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_80_update.h"
#include "data/actor_80_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_90_update.h"
#include "data/actor_90_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_100_update.h"
#include "data/actor_100_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_110_update.h"
#include "data/actor_110_interact.h"

BANKREF(scene_10_actors)

const struct actor_t scene_10_actors[] = {
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
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_19_update),
        .script = TO_FAR_PTR_T(actor_19_interact),
        .reserve_tiles = 0
    },
    {
        // HP,
        .pos = {
            .x = 8 * 16,
            .y = 16 * 16
        },
        .bounds = {
            .left = -8,
            .bottom = 7,
            .right = 23,
            .top = -24
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_hp),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = TRUE,
        .persistent = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = FALSE,
        .script_update = TO_FAR_PTR_T(actor_21_update),
        .reserve_tiles = 0
    },
    {
        // controller,
        .pos = {
            .x = 32 * 16,
            .y = 168 * 16
        },
        .bounds = {
            .left = 6,
            .bottom = -7,
            .right = 9,
            .top = -10
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_bullet),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_2_update),
        .reserve_tiles = 0
    },
    {
        // Monkey2,
        .pos = {
            .x = 160 * 16,
            .y = 88 * 16
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
        .script_update = TO_FAR_PTR_T(actor_9_update),
        .script = TO_FAR_PTR_T(actor_9_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey3,
        .pos = {
            .x = 112 * 16,
            .y = 144 * 16
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
        .script_update = TO_FAR_PTR_T(actor_40_update),
        .script = TO_FAR_PTR_T(actor_40_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey4,
        .pos = {
            .x = 176 * 16,
            .y = 128 * 16
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
        .script_update = TO_FAR_PTR_T(actor_50_update),
        .script = TO_FAR_PTR_T(actor_50_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey5,
        .pos = {
            .x = 128 * 16,
            .y = 208 * 16
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
        .script_update = TO_FAR_PTR_T(actor_60_update),
        .script = TO_FAR_PTR_T(actor_60_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey6,
        .pos = {
            .x = 56 * 16,
            .y = 96 * 16
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
        .script_update = TO_FAR_PTR_T(actor_70_update),
        .script = TO_FAR_PTR_T(actor_70_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey7,
        .pos = {
            .x = 80 * 16,
            .y = 200 * 16
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
        .script_update = TO_FAR_PTR_T(actor_80_update),
        .script = TO_FAR_PTR_T(actor_80_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey8,
        .pos = {
            .x = 72 * 16,
            .y = 40 * 16
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
        .script_update = TO_FAR_PTR_T(actor_90_update),
        .script = TO_FAR_PTR_T(actor_90_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey9,
        .pos = {
            .x = 192 * 16,
            .y = 48 * 16
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
        .script_update = TO_FAR_PTR_T(actor_100_update),
        .script = TO_FAR_PTR_T(actor_100_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey10,
        .pos = {
            .x = 96 * 16,
            .y = 104 * 16
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
        .script_update = TO_FAR_PTR_T(actor_110_update),
        .script = TO_FAR_PTR_T(actor_110_interact),
        .reserve_tiles = 0
    }
};
