#include <los/console.h>

#include <los/syscall.h>

isize console_clear() { return system_call0(CONSOLE_CLEAR_SYSCALL); }