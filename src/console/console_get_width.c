#include <los/console.h>

#include <los/syscall.h>

int64_t console_get_width() { return system_call0(CONSOLE_GET_WIDTH_SYSCALL); }