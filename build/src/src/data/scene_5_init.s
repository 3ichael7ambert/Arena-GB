.module scene_5_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_HAS_LOADED = -4
.LOCAL_TMP2_PEEK_VALUE = -4
.LOCAL_TMP3_PEEK_VALUE = -4
.LOCAL_TMP4_WAIT_ARGS = -4

___bank_scene_5_init = 255
.globl ___bank_scene_5_init

_scene_5_init::
        VM_LOCK

        VM_RESERVE              4

        ; Variable Set To Value
        VM_SET_CONST            VAR_PLAYERHEALTH, 4

        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_LEVEL
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_LEVEL, .ARG0
        VM_POP                  1

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH, 3

        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_1, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 2, 1$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 2$
1$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 4
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

2$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_2, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 3, 3$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 4$
3$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 5
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

4$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_3, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 4, 5$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 6$
5$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 6
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

6$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_4, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 5, 7$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 8$
7$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 7
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

8$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_5, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 6, 9$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 10$
9$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 8
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

10$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_6, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 7, 11$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 12$
11$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 9
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

12$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_7, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 8, 13$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 14$
13$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 10
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

14$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_8, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 9, 15$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 16$
15$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 11
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

16$:

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3A3_HEALTH_9, 3

        ; If Variable .LT Value
        VM_IF_CONST             .LT, VAR_MASENEMYCOUNT, 10, 17$, 0
        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        VM_JUMP                 18$
17$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 12
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

18$:

        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_1, _script_input_1
        VM_INPUT_ATTACH         16, ^/(4 | .OVERRIDE_DEFAULT)/

        ; Variable Set To Value
        VM_SET_CONST            VAR_S3_HEALTH, 4

        ; Variable Copy
        VM_SET                  VAR_ENEMYCOUNT, VAR_MASENEMYCOUNT

        ; Save Data to Slot 0
        VM_RAISE                EXCEPTION_SAVE, 1
            .SAVE_SLOT 0
        VM_POLL_LOADED          .LOCAL_TMP1_HAS_LOADED
        VM_IF_CONST             .EQ, .LOCAL_TMP1_HAS_LOADED, 1, 19$, 0

        ; Store VAR_LEVEL from save slot 0 into VAR_LEVEL
        VM_SAVE_PEEK            .LOCAL_TMP2_PEEK_VALUE, VAR_LEVEL, VAR_LEVEL, 1, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP2_PEEK_VALUE, 1, 20$, 0
        VM_SET_CONST            VAR_LEVEL, 0
20$:

        ; Store VAR_MASENEMYCOUNT from save slot 0 into VAR_MASENEMYCOUNT
        VM_SAVE_PEEK            .LOCAL_TMP3_PEEK_VALUE, VAR_MASENEMYCOUNT, VAR_MASENEMYCOUNT, 1, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP3_PEEK_VALUE, 1, 21$, 0
        VM_SET_CONST            VAR_MASENEMYCOUNT, 0
21$:

19$:

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP4_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP4_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
