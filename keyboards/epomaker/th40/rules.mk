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

# Include RDR library
include $(TOP_DIR)/lib/rdr_lib/rdr_lib.mk

ENCODER_MAP_ENABLE = yes
DEBOUNCE_TYPE = asym_eager_defer_pk
