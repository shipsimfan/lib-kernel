#include <los/console.h>

#include <los/syscall.h>

void console_clear() { system_call0(CONSOLE_CLEAR_SYSCALL); }