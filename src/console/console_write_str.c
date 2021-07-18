#include <los/console.h>

#include <los/syscall.h>

void console_write_str(const char* string) { system_call1(CONSOLE_WRITE_STR_SYSCALL, (uint64_t)string); }