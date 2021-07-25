#include <los/console.h>

#include <los/syscall.h>

int64_t console_set_background_rgb(uint8_t red, uint8_t green, uint8_t blue) { return system_call3(CONSOLE_SET_BACKGROUND_RGB_SYSCALL, red, green, blue); }