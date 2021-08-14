#include <los/console.h>

#include <los/syscall.h>

isize console_write(const char* string, usize string_length) {
    return system_call2(CONSOLE_WRITE_SYSCALL, (usize)string, string_length);
}