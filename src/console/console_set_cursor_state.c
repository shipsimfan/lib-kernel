#include <los/console.h>

#include <los/syscall.h>

isize console_set_cursor_state(bool state) {
    return system_call1(CONSOLE_SET_CURSOR_STATE_SYSCALL, state);
}