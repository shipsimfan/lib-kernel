#include <los/console.h>

#include <los/syscall.h>

int64_t console_set_cursor_pos(int64_t x, int64_t y) { return system_call2(CONSOLE_SET_CURSOR_POS_SYSCALL, (uint64_t)x, (uint64_t)y); }