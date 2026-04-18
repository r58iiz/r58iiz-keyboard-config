#pragma once

#ifdef VIAL_ENABLE
    #define VIAL_KEYBOARD_UID      {0xCF, 0x28, 0x94, 0xAF, 0x53, 0x24, 0xDD, 0x89}
    #define VIAL_UNLOCK_COMBO_ROWS {0, 0}
    #define VIAL_UNLOCK_COMBO_COLS {0, 1}
#endif

// Personal
#define OLED_TIMEOUT               0
#define OLED_BRIGHTNESS            60
#define CUSTOM_OLED_TIMEOUT        15000

#define SPLIT_TRANSACTION_IDS_USER RPC_SPLIT_SYNC

#define SPLIT_LAYER_STATE_ENABLE

#define RGB_MATRIX_MODE_NAME_ENABLE

#define TAPPING_TOGGLE 1
#define TAPPING_TERM   200
#define PERMISSIVE_HOLD

// #define MK_KINETIC_SPEED

#if defined(MK_KINETIC_SPEED)
// Kinetic
    #define MOUSEKEY_DELAY                       5
    #define MOUSEKEY_INTERVAL                    10
    #define MOUSEKEY_MOVE_DELTA                  16
    #define MOUSEKEY_INITIAL_SPEED               100
    #define MOUSEKEY_BASE_SPEED                  5000
    #define MOUSEKEY_DECELERATED_SPEED           400
    #define MOUSEKEY_ACCELERATED_SPEED           3000
    #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS     16
    #define MOUSEKEY_WHEEL_BASE_MOVEMENTS        32
    #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 48
    #define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 8
#else
// Accelerated
    #define MOUSEKEY_DELAY             10
    #define MOUSEKEY_INTERVAL          20
    #define MOUSEKEY_MOVE_DELTA        8
    #define MOUSEKEY_MAX_SPEED         2
    #define MOUSEKEY_TIME_TO_MAX       15
    #define MOUSEKEY_WHEEL_DELAY       10
    #define MOUSEKEY_WHEEL_INTERVAL    80
    #define MOUSEKEY_WHEEL_DELTA       1
    #define MOUSEKEY_WHEEL_MAX_SPEED   8
    #define MOUSEKEY_WHEEL_TIME_TO_MAX 40
#endif
