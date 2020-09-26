MCU = STM32F303

LAYOUTS = ortho_5x12

MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes

# maybe console should just be off?
CONSOLE_ENABLE = yes

# it's a fast mcu, may as well do per-key (pk)
# something seems wrong if there's enough noise for errant keystrokes, so eager should be fine.
DEBOUNCE_TYPE = sym_eager_pk

