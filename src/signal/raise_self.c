#include <los/signal.h>

#include <los/syscall.h>

void raise_self(u8 sig) { system_call1(RAISE_SELF_SYSCALL, (usize)sig); }