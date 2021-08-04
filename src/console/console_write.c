#include <los/console.h>

#include <los/syscall.h>

int64_t console_write(const char* string, uint64_t string_length) {
    return system_call2(CONSOLE_WRITE_SYSCALL, (uint64_t)string, string_length);
}