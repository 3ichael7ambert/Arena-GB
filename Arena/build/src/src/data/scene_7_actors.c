#pragma bank 255

// Scene: Arena4
// Actors

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/actor_7_update.h"
#include "data/sprite_bullet.h"
#include "data/actor_12_update.h"
#include "data/sprite_npc003.h"
#include "data/actor_6_update.h"
#include "data/actor_6_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_33_update.h"
#include "data/actor_33_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_43_update.h"
#include "data/actor_43_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_53_update.h"
#include "data/actor_53_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_63_update.h"
#include "data/actor_63_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_73_update.h"
#include "data/actor_73_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_83_update.h"
#include "data/actor_83_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_93_update.h"
#include "data/actor_93_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_103_update.h"
#include "data/actor_103_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_113_update.h"
#include "data/actor_113_interact.h"

BANKREF(scene_7_actors)

const struct actor_t scene_7_actors[] = {
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
        .script_update = TO_FAR_PTR_T(actor_7_update),
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
        .script_update = TO_FAR_PTR_T(actor_12_update),
        .reserve_tiles = 0
    },
    {
        // Monkey,
        .pos = {
            .x = 168 * 16,
            .y = 112 * 16
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
        // Monkey2,
        .pos = {
            .x = 144 * 16,
            .y = 152 * 16
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
        .script_update = TO_FAR_PTR_T(actor_33_update),
        .script = TO_FAR_PTR_T(actor_33_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey3,
        .pos = {
            .x = 104 * 16,
            .y = 176 * 16
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
        .script_update = TO_FAR_PTR_T(actor_43_update),
        .script = TO_FAR_PTR_T(actor_43_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey4,
        .pos = {
            .x = 64 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_53_update),
        .script = TO_FAR_PTR_T(actor_53_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey5,
        .pos = {
            .x = 40 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_63_update),
        .script = TO_FAR_PTR_T(actor_63_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey6,
        .pos = {
            .x = 120 * 16,
            .y = 72 * 16
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
        .script_update = TO_FAR_PTR_T(actor_73_update),
        .script = TO_FAR_PTR_T(actor_73_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey7,
        .pos = {
            .x = 104 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_83_update),
        .script = TO_FAR_PTR_T(actor_83_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey8,
        .pos = {
            .x = 176 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_93_update),
        .script = TO_FAR_PTR_T(actor_93_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey9,
        .pos = {
            .x = 192 * 16,
            .y = 168 * 16
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
        .script_update = TO_FAR_PTR_T(actor_103_update),
        .script = TO_FAR_PTR_T(actor_103_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey10,
        .pos = {
            .x = 32 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_113_update),
        .script = TO_FAR_PTR_T(actor_113_interact),
        .reserve_tiles = 0
    }
};
