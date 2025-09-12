# MCU configuration
MCU_FAMILY = ES32
MCU_SERIES = FS026

# Bootloader selection
BOOTLOADER = custom

# linker script to use
MCU_LDSCRIPT = FS026

# startup code to use
MCU_STARTUP = FS026

# Board: it should exist either in <chibios>/os/hal/boards/
#  or <this_dir>/boards
BOARD = FS026

# FS026 series is Cortex M0
MCU  = cortex-m0
# ARM version, CORTEX-M0/M1 are 6, CORTEX-M3/M4/M7 are 7
ARMV = 6

# Build Options
#   change yes to no to disable
#
EEPROM_CUSTOM = custom
NO_USB_STARTUP_CHECK = yes
BLUETOOTH_CUSTOM = yes

# Include common library (replaces rdr_lib)
VPATH += keyboards/epomaker/th40/common
SRC += rdmctmzt_common.c
SRC += quantum/dynamic_keymap.c
SRC += three_mode.c
SRC += user_battery.c
SRC += user_eeprom.c
SRC += user_emi.c
SRC += user_led_custom.c
SRC += user_spi.c
SRC += user_system.c

VPATH += lib/chibios-contrib/os/common/ext/CMSIS/ES32/FS026/md
SRC += lib/chibios-contrib/os/common/ext/CMSIS/ES32/FS026/md/md_spi.c

DEBOUNCE_TYPE = asym_eager_defer_pk
