#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS
    ),

    [1] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS
    ),

    [2] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS
    ),

    [3] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS  
    ),

    [4] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS   
    ),

    [5] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS  
    ),

    [6] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS 
    ),

    [7] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS 
    ),

    [8] = LAYOUT_2x4_2(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS  
    )
};

         #if defined(ENCODER_MAP_ENABLE)
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [1] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [2] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [3] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [4] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [5] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [6] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [7] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [8] =  {  ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  }
     };
    #endif


