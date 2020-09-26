#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xabab
#define PRODUCT_ID      0xabab
#define DEVICE_VER      0x0001
#define MANUFACTURER    Matt Johnston matt@ucc.asn.au
#define PRODUCT         59KeyGrid#1

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* XXX fixme */
#define MATRIX_ROW_PINS { B8, A0, A1, A2, A3 }
#define MATRIX_COL_PINS { B13, B14, B15, B9, B7, B6, B5, B4, B3, B2, B1, B0 }

#define DIODE_DIRECTION COL2ROW

#define USB_MAX_POWER_CONSUMPTION 100

/* Should be enough right? */
#define DEBOUNCE 2
