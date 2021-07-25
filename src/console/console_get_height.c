#include <los/console.h>

#include <los/syscall.h>

int64_t console_get_height() { return system_call0(CONSOLE_GET_HEIGHT_SYSCALL); }