.module scene_7_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_HAS_LOADED = -1
.LOCAL_TMP1_PEEK_VALUE = -1
.LOCAL_TMP2_PEEK_VALUE = -1
.LOCAL_TMP3_WAIT_ARGS = -1

___bank_scene_7_init = 255
.globl ___bank_scene_7_init

_scene_7_init::
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
        VM_SET_CONST            VAR_S6A6_HEALTH, 3

        ; Variables .ADD Value
        VM_RPN
            .R_REF      VAR_ENEMYCOUNT
            .R_INT16    1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_ENEMYCOUNT, .ARG0
        VM_POP                  1

        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_4, _script_input_4
        VM_INPUT_ATTACH         16, ^/(4 | .OVERRIDE_DEFAULT)/

        ; Variable Set To Value
        VM_SET_CONST            VAR_S6_HEALTH, 4

        ; Variable Copy
        VM_SET                  VAR_ENEMYCOUNT, VAR_MASENEMYCOUNT

        ; Save Data to Slot 0
        VM_RAISE                EXCEPTION_SAVE, 1
            .SAVE_SLOT 0
        VM_POLL_LOADED          .LOCAL_TMP0_HAS_LOADED
        VM_IF_CONST             .EQ, .LOCAL_TMP0_HAS_LOADED, 1, 1$, 0

        ; Store VAR_LEVEL from save slot 0 into VAR_LEVEL
        VM_SAVE_PEEK            .LOCAL_TMP1_PEEK_VALUE, VAR_LEVEL, VAR_LEVEL, 1, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP1_PEEK_VALUE, 1, 2$, 0
        VM_SET_CONST            VAR_LEVEL, 0
2$:

        ; Store VAR_MASENEMYCOUNT from save slot 0 into VAR_MASENEMYCOUNT
        VM_SAVE_PEEK            .LOCAL_TMP2_PEEK_VALUE, VAR_MASENEMYCOUNT, VAR_MASENEMYCOUNT, 1, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP2_PEEK_VALUE, 1, 3$, 0
        VM_SET_CONST            VAR_MASENEMYCOUNT, 0
3$:

1$:

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP3_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP3_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
