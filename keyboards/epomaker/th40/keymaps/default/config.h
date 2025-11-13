// Copyright 2025 EPOMAKER (@Epomaker)
// SPDX-License-Identifier: GPL-2.0-or-later

#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR  1151
#define EEPROM_SIZE 1152

#define FEE_PAGE_SIZE (0x200)
#define FEE_PAGE_COUNT (8)

#define FEE_PAGE_BASE_ADDRESS (0x1F000)
#define FEE_MCU_FLASH_SIZE (0x1000)

#define EECONFIG_USER_DATA_SIZE 4

#define EECONFIG_KB_DATA_SIZE 1

#define TRANSIENT_EEPROM_SIZE 4096

// Custom configuration
#undef DEBOUNCE
#define DEBOUNCE 5

#define TAPPING_TERM 200          // 기존 175 → 200
#define QUICK_TAP_TERM 150        // 기존 120 → 150 (문제2 해결)
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
//#define COMBO_TERM 100  // 100ms 이내에 동시 누름
//#define COMBO_MUST_TAP_PER_COMBO  // 콤보마다 tap 필요
//#define COMBO_TERM_PER_COMBO       // 콤보마다 개별 타이밍
#define TAP_DANCE_TERM 100  // 탭댄스 인식 시간
#define TAPPING_TERM_PER_KEY
