#include <los.h>
#include <stdint.h>

uintptr_t __stack_chk_guard = 0x20E259B202B97F53;

__attribute__((weak, noreturn)) void __stack_chk_fail() {
    console_write_str("Stack overflow detected!\n");
    exit_process(1);
}