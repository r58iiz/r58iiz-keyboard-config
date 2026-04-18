ENCODER_MAP_ENABLE = yes
CONVERT_TO = rp2040_ce

# Vial
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIALRGB_ENABLE = yes

# Personal
OLED_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
MOUSEKEY_ENABLE = yes
RGB_MATRIX_CUSTOM_USER = yes

# COMBO_ENABLE = no
# TAP_DANCE_ENABLE = no
# KEY_OVERRIDE_ENABLE = no

SRC += state/split_state.c
SRC += display/oled_master.c
SRC += display/oled_slave.c
SRC += display/oled_utils.c
SRC += display/oled_images.c
SRC += display/oledWidget/hsv_widget.c
SRC += display/oledWidget/keylogger_widget.c
SRC += display/oledWidget/layer_widget.c
SRC += display/oledWidget/rgbm_widget.c
SRC += display/oledWidget/system_widget.c
SRC += display/oledWidget/wpm_widget.c
