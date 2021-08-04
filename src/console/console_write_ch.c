#include <los/console.h>

#include <los/syscall.h>

int64_t console_write_ch(char character) { return system_call1(CONSOLE_WRITE_CH_SYSCALL, character); }