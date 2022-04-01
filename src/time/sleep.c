#include <los/time.h>

#include <los/syscall.h>

void sleep(usize duration) { system_call1(SLEEP_SYSCALL, duration); }