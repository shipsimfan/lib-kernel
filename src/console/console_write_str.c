#include <los/console.h>

#include <los/syscall.h>

int64_t console_write_str(const char* string) { return system_call1(CONSOLE_WRITE_STR_SYSCALL, (uint64_t)string); }