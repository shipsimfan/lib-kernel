#include <los/signal.h>

#include <los/syscall.h>

void set_signal_type(u8 sig, usize type) {
    system_call2(SET_SIGNAL_TYPE_SYSCALL, (usize)sig, type);
}