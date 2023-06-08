// Copyright 2023 edd.boards (@e2dwrd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"
#define VENDOR_ID 0xEDD8
#define PRODUCT_ID 0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    edd.boards
#define PRODUCT         Wisanteno

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define MATRIX_ROWS 3
#define MATRIX_COLS 4
#define MATRIX_ROW_PINS { GP7, GP8, GP9 }
#define MATRIX_COL_PINS { GP0, GP1, GP2, GP3 }
#define DIODE_DIRECTION ROW2COL

#define LOCKING_SUPPORT_ENABLE

#define LOCKING_RESYNC_ENABLE

#define ENCODERS_PAD_A { GP7 }
#define ENCODERS_PAD_B { GP6 }

#define LAYOUT_2x4_2(     \
	K00, K01, K02, K03,    \
    K10, K11, K12, K13,     \
    K20, K21                 \
)                             \

{                             \
{ K00, K01, K02, K03,     },   \
{ K10, K11, K12, K13,     },    \
{ K20, K21, KC_NO, KC_NO  }      \
} 
////

