#include <los/signal.h>

#include <los/syscall.h>

void mask_signal(u8 sig) { system_call1(MASK_SIGNAL_SYSCALL, (usize)sig); }