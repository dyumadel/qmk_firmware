RDR_LIB_DIR := $(LIB_PATH)/rdr_lib

# Link against the static library
LDFLAGS += -L$(RDR_LIB_DIR) -lrdrcommon
# Allow multiple definitions (RDR library overrides QMK functions)
LDFLAGS += -Wl,--allow-multiple-definition
VPATH += $(RDR_LIB_DIR)
EXTRAINCDIRS += $(RDR_LIB_DIR)
