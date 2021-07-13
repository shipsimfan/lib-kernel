#include <los/console.h>

#include <los/syscall.h>

void console_write(char character) { system_call1(CONSOLE_WRITE_SYSCALL, character); }