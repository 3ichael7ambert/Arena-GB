.module actor_7_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_actor_7_update = 255
.globl ___bank_actor_7_update

_actor_7_update::
        VM_RESERVE              4

1$:
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_PLAYERHEALTH, 4, 2$, 0
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_PLAYERHEALTH, 3, 4$, 0
        VM_JUMP                 5$
4$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 3
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

5$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_PLAYERHEALTH, 2, 6$, 0
        VM_JUMP                 7$
6$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 2
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

7$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_PLAYERHEALTH, 1, 8$, 0
        VM_JUMP                 9$
8$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

9$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_PLAYERHEALTH, 0, 10$, 0
        VM_JUMP                 11$
10$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

11$:

        VM_JUMP                 3$
2$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 4
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

3$:

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
