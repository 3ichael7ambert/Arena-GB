#pragma bank 255

// Scene: Arena4

#include "gbs_types.h"
#include "data/bg_arena2_copy_8.h"
#include "data/scene_7_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player.h"
#include "data/scene_7_actors.h"
#include "data/scene_7_sprites.h"
#include "data/scene_7_projectiles.h"
#include "data/scene_7_init.h"
#include "data/scene_7_p_hit1.h"

BANKREF(scene_7)

const struct scene_t scene_7 = {
    .width = 32,
    .height = 32,
    .type = SCENE_TYPE_ADVENTURE,
    .background = TO_FAR_PTR_T(bg_arena2_copy_8),
    .collisions = TO_FAR_PTR_T(scene_7_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player),
    .n_actors = 12,
    .n_triggers = 0,
    .n_sprites = 3,
    .n_projectiles = 2,
    .actors = TO_FAR_PTR_T(scene_7_actors),
    .sprites = TO_FAR_PTR_T(scene_7_sprites),
    .projectiles = TO_FAR_PTR_T(scene_7_projectiles),
    .script_init = TO_FAR_PTR_T(scene_7_init),
    .script_p_hit1 = TO_FAR_PTR_T(scene_7_p_hit1)
};
