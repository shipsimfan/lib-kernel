#include <los/console.h>

#include <los/syscall.h>

int64_t console_set_foreground(uint64_t color) { return system_call1(CONSOLE_SET_FOREGROUND_SYSCALL, color); }