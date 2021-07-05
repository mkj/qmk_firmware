MCU = STM32F303

LAYOUTS = ortho_5x12

MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes

# maybe console should just be off?
CONSOLE_ENABLE = yes

# it's a fast mcu, may as well do per-key (pk)
# need to use defer rather than eager since the bathroom light switch induces noise
DEBOUNCE_TYPE = sym_defer_pk

