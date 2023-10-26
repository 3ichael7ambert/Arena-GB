.module actor_19_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_OTHER_ACTOR = -7

___bank_actor_19_update = 255
.globl ___bank_actor_19_update

_actor_19_update::
        VM_RESERVE              7

1$:
        ; Variable Set To Random
        VM_RAND                 VAR_S2A0__PLAYER_HEALTH, 1, 4

        ; Switch Variable
        VM_SWITCH               VAR_S2A0__PLAYER_HEALTH, 4, 0
        .dw 1, 2$
        .dw 2, 3$
        .dw 3, 4$
        .dw 4, 5$

        VM_JUMP                 6$
        ; case 1:
2$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    16
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, ^/(.ACTOR_ATTR_CHECK_COLL | .ACTOR_ATTR_H_FIRST)/
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

        VM_JUMP                 6$
        ; case 2:
3$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, ^/(.ACTOR_ATTR_CHECK_COLL | .ACTOR_ATTR_H_FIRST)/
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

        VM_JUMP                 6$
        ; case 3:
4$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    -128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, ^/(.ACTOR_ATTR_CHECK_COLL | .ACTOR_ATTR_H_FIRST)/
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

        VM_JUMP                 6$
        ; case 4:
5$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    -128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, ^/(.ACTOR_ATTR_CHECK_COLL | .ACTOR_ATTR_H_FIRST)/
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

        VM_JUMP                 6$
6$:

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; If Actor .LTE 5 tiles from Actor
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_SET_CONST            .LOCAL_TMP1_OTHER_ACTOR, 0
        VM_ACTOR_GET_POS        .LOCAL_TMP1_OTHER_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_TMP1_OTHER_ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_OPERATOR .SUB
            .R_REF      ^/(.LOCAL_TMP1_OTHER_ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_OPERATOR .SUB
            .R_OPERATOR .MUL
            .R_REF      ^/(.LOCAL_TMP1_OTHER_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_OPERATOR .SUB
            .R_REF      ^/(.LOCAL_TMP1_OTHER_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_OPERATOR .SUB
            .R_OPERATOR .MUL
            .R_OPERATOR .ADD
            .R_INT16    25
            .R_OPERATOR .LTE
            .R_STOP
        VM_IF_CONST             .EQ, .ARG0, 0, 7$, 1

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Launch Projectile In Source Actor Direction
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    0
            .R_INT16    0
            .R_STOP
        VM_ACTOR_GET_ANGLE      ^/(.LOCAL_ACTOR - 4)/, .ARG1
        VM_PROJECTILE_LAUNCH    1, .ARG3
        VM_POP                  4

        VM_JUMP                 8$
7$:
8$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S2A2_HEALTH, 0, 9$, 0
        VM_JUMP                 10$
9$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 1
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

10$:

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
