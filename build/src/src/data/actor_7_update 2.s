.module actor_7_update

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_title_screen, _scene_title_screen

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_actor_7_update = 255
.globl ___bank_actor_7_update

_actor_7_update::
        VM_RESERVE              4

1$:
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S9A9_PLAYER_HEALTH, 4, 2$, 0
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S9A9_PLAYER_HEALTH, 3, 4$, 0
        VM_JUMP                 5$
4$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 3
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

5$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S9A9_PLAYER_HEALTH, 2, 6$, 0
        VM_JUMP                 7$
6$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 2
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

7$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S9A9_PLAYER_HEALTH, 1, 8$, 0
        VM_JUMP                 9$
8$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

9$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S9A9_PLAYER_HEALTH, 0, 10$, 0
        VM_JUMP                 11$
10$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

11$:

        VM_JUMP                 3$
2$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 4
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

3$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S9A9_PLAYER_HEALTH, 0, 12$, 0
        VM_JUMP                 13$
12$:
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_title_screen

13$:

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
