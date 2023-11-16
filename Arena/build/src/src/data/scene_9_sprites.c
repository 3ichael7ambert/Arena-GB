#pragma bank 255

// Scene: Arena7
// Sprites

#include "gbs_types.h"
#include "data/sprite_hp.h"
#include "data/sprite_npc003.h"
#include "data/sprite_bullet.h"

BANKREF(scene_9_sprites)

const far_ptr_t scene_9_sprites[] = {
    TO_FAR_PTR_T(sprite_hp),
    TO_FAR_PTR_T(sprite_npc003),
    TO_FAR_PTR_T(sprite_bullet)
};
