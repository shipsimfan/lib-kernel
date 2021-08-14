#include <los/console.h>

#include <los/syscall.h>

isize console_set_background(usize color) { return system_call1(CONSOLE_SET_BACKGROUND_SYSCALL, color); }