#pragma bank 255

// Scene: Arena8
// Actors

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/actor_20_update.h"
#include "data/sprite_bullet.h"
#include "data/actor_22_update.h"
#include "data/sprite_npc003.h"
#include "data/actor_24_update.h"
#include "data/actor_24_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_37_update.h"
#include "data/actor_37_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_47_update.h"
#include "data/actor_47_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_57_update.h"
#include "data/actor_57_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_67_update.h"
#include "data/actor_67_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_77_update.h"
#include "data/actor_77_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_87_update.h"
#include "data/actor_87_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_97_update.h"
#include "data/actor_97_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_107_update.h"
#include "data/actor_107_interact.h"
#include "data/sprite_npc003.h"
#include "data/actor_117_update.h"
#include "data/actor_117_interact.h"

BANKREF(scene_1_actors)

const struct actor_t scene_1_actors[] = {
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
        .script_update = TO_FAR_PTR_T(actor_20_update),
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
        .script_update = TO_FAR_PTR_T(actor_22_update),
        .reserve_tiles = 0
    },
    {
        // Monkey,
        .pos = {
            .x = 152 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_24_update),
        .script = TO_FAR_PTR_T(actor_24_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey2,
        .pos = {
            .x = 120 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_37_update),
        .script = TO_FAR_PTR_T(actor_37_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey3,
        .pos = {
            .x = 96 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_47_update),
        .script = TO_FAR_PTR_T(actor_47_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey4,
        .pos = {
            .x = 208 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_57_update),
        .script = TO_FAR_PTR_T(actor_57_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey5,
        .pos = {
            .x = 112 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_67_update),
        .script = TO_FAR_PTR_T(actor_67_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey6,
        .pos = {
            .x = 120 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_77_update),
        .script = TO_FAR_PTR_T(actor_77_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey7,
        .pos = {
            .x = 56 * 16,
            .y = 184 * 16
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
        .script_update = TO_FAR_PTR_T(actor_87_update),
        .script = TO_FAR_PTR_T(actor_87_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey8,
        .pos = {
            .x = 120 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_97_update),
        .script = TO_FAR_PTR_T(actor_97_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey9,
        .pos = {
            .x = 120 * 16,
            .y = 224 * 16
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
        .script_update = TO_FAR_PTR_T(actor_107_update),
        .script = TO_FAR_PTR_T(actor_107_interact),
        .reserve_tiles = 0
    },
    {
        // Monkey10,
        .pos = {
            .x = 16 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_117_update),
        .script = TO_FAR_PTR_T(actor_117_interact),
        .reserve_tiles = 0
    }
};
