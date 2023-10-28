#pragma bank 255

// Scene: Arena6
// Sprites

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/sprite_bullet.h"
#include "data/sprite_npc003.h"

BANKREF(scene_8_sprites)

const far_ptr_t scene_8_sprites[] = {
    TO_FAR_PTR_T(sprite_hp),
    TO_FAR_PTR_T(sprite_bullet),
    TO_FAR_PTR_T(sprite_npc003)
};
