#include <los/console.h>

#include <los/syscall.h>

int64_t console_clear() { return system_call0(CONSOLE_CLEAR_SYSCALL); }