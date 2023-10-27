.module scene_12_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_HAS_LOADED = -1
.LOCAL_TMP1_PEEK_VALUE = -1
.LOCAL_TMP2_PEEK_VALUE = -1
.LOCAL_TMP3_WAIT_ARGS = -1

___bank_scene_12_init = 255
.globl ___bank_scene_12_init

_scene_12_init::
        VM_LOCK

        VM_RESERVE              1

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

        ; Variable Copy
        VM_SET                  VAR_ENEMYCOUNT, VAR_MASENEMYCOUNT

        ; Variable Set To Value
        VM_SET_CONST            VAR_S11A11_HEALTH, 3

        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_9, _script_input_9
        VM_INPUT_ATTACH         16, ^/(4 | .OVERRIDE_DEFAULT)/

        ; Variable Set To Value
        VM_SET_CONST            VAR_S11_HEALTH, 4

        ; Variable Copy
        VM_SET                  VAR_ENEMYCOUNT, VAR_MASENEMYCOUNT

        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 10, 1$, 0
        VM_JUMP                 2$
1$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 1

2$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 11, 3$, 0
        VM_JUMP                 4$
3$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 20, 5$, 0
        VM_JUMP                 6$
5$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 2

6$:

4$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 21, 7$, 0
        VM_JUMP                 8$
7$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 30, 9$, 0
        VM_JUMP                 10$
9$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 3

10$:

8$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 31, 11$, 0
        VM_JUMP                 12$
11$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 40, 13$, 0
        VM_JUMP                 14$
13$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 4

14$:

12$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 41, 15$, 0
        VM_JUMP                 16$
15$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 50, 17$, 0
        VM_JUMP                 18$
17$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 5

18$:

16$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 51, 19$, 0
        VM_JUMP                 20$
19$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 60, 21$, 0
        VM_JUMP                 22$
21$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 6

22$:

20$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 61, 23$, 0
        VM_JUMP                 24$
23$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 70, 25$, 0
        VM_JUMP                 26$
25$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 7

26$:

24$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 71, 27$, 0
        VM_JUMP                 28$
27$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 80, 29$, 0
        VM_JUMP                 30$
29$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 8

30$:

28$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 81, 31$, 0
        VM_JUMP                 32$
31$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 90, 33$, 0
        VM_JUMP                 34$
33$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 9

34$:

32$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_LEVEL, 91, 35$, 0
        VM_JUMP                 36$
35$:
        ; If Variable .LTE Value
        VM_IF_CONST             .LTE, VAR_LEVEL, 100, 37$, 0
        VM_JUMP                 38$
37$:
        ; Variable Set To Value
        VM_SET_CONST            VAR_MASENEMYCOUNT, 10

38$:

36$:

        ; Save Data to Slot 0
        VM_RAISE                EXCEPTION_SAVE, 1
            .SAVE_SLOT 0
        VM_POLL_LOADED          .LOCAL_TMP0_HAS_LOADED
        VM_IF_CONST             .EQ, .LOCAL_TMP0_HAS_LOADED, 1, 39$, 0

        ; Store VAR_LEVEL from save slot 0 into VAR_LEVEL
        VM_SAVE_PEEK            .LOCAL_TMP1_PEEK_VALUE, VAR_LEVEL, VAR_LEVEL, 1, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP1_PEEK_VALUE, 1, 40$, 0
        VM_SET_CONST            VAR_LEVEL, 0
40$:

        ; Store VAR_MASENEMYCOUNT from save slot 0 into VAR_MASENEMYCOUNT
        VM_SAVE_PEEK            .LOCAL_TMP2_PEEK_VALUE, VAR_MASENEMYCOUNT, VAR_MASENEMYCOUNT, 1, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP2_PEEK_VALUE, 1, 41$, 0
        VM_SET_CONST            VAR_MASENEMYCOUNT, 0
41$:

39$:

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP3_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP3_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
