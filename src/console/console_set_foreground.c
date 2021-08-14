#include <los/console.h>

#include <los/syscall.h>

isize console_set_foreground(usize color) { return system_call1(CONSOLE_SET_FOREGROUND_SYSCALL, color); }