#include <los/time.h>

#include <los/syscall.h>

void sleep(usize duration) { system_call1(SET_ALARM_SYSCALL, duration); }