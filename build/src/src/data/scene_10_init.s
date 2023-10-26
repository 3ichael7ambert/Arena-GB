.module scene_10_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_scene_10_init = 255
.globl ___bank_scene_10_init

_scene_10_init::
        VM_LOCK

        VM_RESERVE              1

        ; Variable Set To Value
        VM_SET_CONST            VAR_S2A2_HEALTH, 3

        ; Variable Set To Value
        VM_SET_CONST            VAR_S2A2_PLAYER_HEALTH, 4

        ; Input Script Attach
        VM_CONTEXT_PREPARE      4, ___bank_script_input_0, _script_input_0
        VM_INPUT_ATTACH         16, ^/(4 | .OVERRIDE_DEFAULT)/

        ; Variable Set To Value
        VM_SET_CONST            VAR_S2_HEALTH, 4

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
