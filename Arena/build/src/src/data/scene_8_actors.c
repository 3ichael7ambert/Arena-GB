#pragma bank 255

// Scene: Arena6
// Actors

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/actor_13_update.h"
#include "data/sprite_bullet.h"
#include "data/actor_16_update.h"
#include "data/sprite_npc003.h"
#include "data/actor_17_update.h"
#include "data/actor_17_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_35_update.h"
#include "data/actor_35_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_45_update.h"
#include "data/actor_45_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_55_update.h"
#include "data/actor_55_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_65_update.h"
#include "data/actor_65_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_75_update.h"
#include "data/actor_75_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_85_update.h"
#include "data/actor_85_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_95_update.h"
#include "data/actor_95_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_105_update.h"
#include "data/actor_105_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_115_update.h"
#include "data/actor_115_interact.h"

BANKREF(scene_8_actors)

const struct actor_t scene_8_actors[] = {
    {
        // HP,
        .pos = {
            .x = 8 * 16,
            .y = 24 * 16
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
        .script_update = TO_FAR_PTR_T(actor_13_update),
        .reserve_tiles = 0
    },
    {
        // controller,
        .pos = {
            .x = 0 * 16,
            .y = 0 * 16
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
        .script_update = TO_FAR_PTR_T(actor_16_update),
        .reserve_tiles = 0
    },
    {
        // Monkey,
        .pos = {
            .x = 168 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_17_update),
        .script = TO_FAR_PTR_T(actor_17_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey2,
        .pos = {
            .x = 136 * 16,
            .y = 160 * 16
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
        .script_update = TO_FAR_PTR_T(actor_35_update),
        .script = TO_FAR_PTR_T(actor_35_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey3,
        .pos = {
            .x = 144 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_45_update),
        .script = TO_FAR_PTR_T(actor_45_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey4,
        .pos = {
            .x = 80 * 16,
            .y = 192 * 16
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
        .script_update = TO_FAR_PTR_T(actor_55_update),
        .script = TO_FAR_PTR_T(actor_55_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey5,
        .pos = {
            .x = 72 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_65_update),
        .script = TO_FAR_PTR_T(actor_65_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey6,
        .pos = {
            .x = 136 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_75_update),
        .script = TO_FAR_PTR_T(actor_75_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey7,
        .pos = {
            .x = 64 * 16,
            .y = 136 * 16
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
        .script_update = TO_FAR_PTR_T(actor_85_update),
        .script = TO_FAR_PTR_T(actor_85_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey8,
        .pos = {
            .x = 176 * 16,
            .y = 192 * 16
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
        .script_update = TO_FAR_PTR_T(actor_95_update),
        .script = TO_FAR_PTR_T(actor_95_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey9,
        .pos = {
            .x = 104 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_105_update),
        .script = TO_FAR_PTR_T(actor_105_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey10,
        .pos = {
            .x = 96 * 16,
            .y = 160 * 16
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
        .script_update = TO_FAR_PTR_T(actor_115_update),
        .script = TO_FAR_PTR_T(actor_115_interact),
        .reserve_tiles = 0
    }
};
