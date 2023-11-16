#pragma bank 255

// Scene: Arena7
// Actors

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/actor_14_update.h"
#include "data/sprite_npc003.h"
#include "data/actor_18_update.h"
#include "data/actor_18_interact.h"
#include "data/sprite_bullet.h"
#include "data/actor_31_update.h"
#include "data/sprite_npc003.h"
#include "data/actor_36_update.h"
#include "data/actor_36_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_46_update.h"
#include "data/actor_46_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_56_update.h"
#include "data/actor_56_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_66_update.h"
#include "data/actor_66_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_76_update.h"
#include "data/actor_76_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_86_update.h"
#include "data/actor_86_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_96_update.h"
#include "data/actor_96_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_106_update.h"
#include "data/actor_106_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_116_update.h"
#include "data/actor_116_interact.h"

BANKREF(scene_9_actors)

const struct actor_t scene_9_actors[] = {
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
        .script_update = TO_FAR_PTR_T(actor_14_update),
        .reserve_tiles = 0
    },
    {
        // Monkey,
        .pos = {
            .x = 160 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_18_update),
        .script = TO_FAR_PTR_T(actor_18_interact),
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
        .script_update = TO_FAR_PTR_T(actor_31_update),
        .reserve_tiles = 0
    },
    {
        // Monkey2,
        .pos = {
            .x = 80 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_36_update),
        .script = TO_FAR_PTR_T(actor_36_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey3,
        .pos = {
            .x = 120 * 16,
            .y = 80 * 16
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
        .script_update = TO_FAR_PTR_T(actor_46_update),
        .script = TO_FAR_PTR_T(actor_46_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey4,
        .pos = {
            .x = 208 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_56_update),
        .script = TO_FAR_PTR_T(actor_56_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey5,
        .pos = {
            .x = 120 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_66_update),
        .script = TO_FAR_PTR_T(actor_66_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey6,
        .pos = {
            .x = 120 * 16,
            .y = 32 * 16
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
        .script_update = TO_FAR_PTR_T(actor_76_update),
        .script = TO_FAR_PTR_T(actor_76_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey7,
        .pos = {
            .x = 32 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_86_update),
        .script = TO_FAR_PTR_T(actor_86_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey8,
        .pos = {
            .x = 120 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_96_update),
        .script = TO_FAR_PTR_T(actor_96_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey9,
        .pos = {
            .x = 224 * 16,
            .y = 56 * 16
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
        .script_update = TO_FAR_PTR_T(actor_106_update),
        .script = TO_FAR_PTR_T(actor_106_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey10,
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
        .script_update = TO_FAR_PTR_T(actor_116_update),
        .script = TO_FAR_PTR_T(actor_116_interact),
        .reserve_tiles = 0
    }
};
