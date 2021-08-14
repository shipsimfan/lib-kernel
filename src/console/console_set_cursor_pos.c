#include <los/console.h>

#include <los/syscall.h>

isize console_set_cursor_pos(isize x, isize y) { return system_call2(CONSOLE_SET_CURSOR_POS_SYSCALL, (usize)x, (usize)y); }