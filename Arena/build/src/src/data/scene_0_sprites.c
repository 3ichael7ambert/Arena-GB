#pragma bank 255

// Scene: Arena3
// Sprites

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/sprite_bullet.h"
#include "data/sprite_npc003.h"

BANKREF(scene_0_sprites)

const far_ptr_t scene_0_sprites[] = {
    TO_FAR_PTR_T(sprite_hp),
    TO_FAR_PTR_T(sprite_bullet),
    TO_FAR_PTR_T(sprite_npc003)
};
