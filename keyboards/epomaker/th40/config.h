/* Copyright 2021 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */

/*
 * Feature disable options
 * These options are also useful to firmware size reduction.
 */

#define MATRIX_UNSELECT_DRIVE_HIGH
#define CORTEX_ENABLE_WFI_IDLE FALSE

/* Ensure we jump to bootloader if the RESET keycode was pressed */
#define EARLY_INIT_PERFORM_BOOTLOADER_JUMP TRUE


#define DEBOUNCE 5

#ifndef NOP_FUDGE
#define NOP_FUDGE 0.4
#endif

#define RGB_MATRIX_LED_COUNT 47
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_KEYRELEASES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_DISABLE_AFTER_TIMEOUT 0
#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180
#define RGB_MATRIX_SLEEP

// Key positions for MAC/WIN toggle (adjust these for TH40 layout)
#define WIN_COL                     (1)
#define WIN_ROL                     (3)
#define MAC_COL                     (2)
#define MAC_ROL                     (3)

// BLE configuration for TH40
#define USER_BlE_ID                 (0X0040)  // TH40 BLE ID
#define USER_BlE1_NAME              "TH40-1"
#define USER_BlE2_NAME              "TH40-2"
#define USER_BlE3_NAME              "TH40-3"

// Matrix configuration for TH40
#define KEYBOARD_COL                (12)
#define KEYBOARD_ROL                (5)
#define MATRIX_USER_COL_PINS        { D15, D14, C15, C14, C13, D3, D2, C12, C11, C10, A14, C9 }
#define MATRIX_USER_ROW_PINS        { B0, B3, B4, B5, B6 }
