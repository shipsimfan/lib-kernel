#include <los/console.h>

#include <los/syscall.h>
#include <los/util.h>

void console_write_str(const char* string) { system_call2(CONSOLE_WRITE_STR_SYSCALL, (uint64_t)string, string_length(string)); }