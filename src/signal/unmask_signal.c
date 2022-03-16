#include <los/signal.h>

#include <los/syscall.h>

void unmask_signal(u8 sig) { system_call1(UNMASK_SIGNAL_SYSCALL, (usize)sig); }