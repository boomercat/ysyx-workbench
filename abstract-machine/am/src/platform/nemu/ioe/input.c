#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
    uint32_t _key_code = inl(KBD_ADDR);
    kbd->keydown = _key_code & KEYDOWN_MASK ? 1 : 0;
    kbd->keycode = _key_code & ~KEYDOWN_MASK;
  
}
