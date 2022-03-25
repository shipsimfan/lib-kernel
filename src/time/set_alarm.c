#include <los/time.h>

#include <los/syscall.h>

void set_alarm(usize milliseconds) {
    system_call1(SET_ALARM_SYSCALL, milliseconds);
}