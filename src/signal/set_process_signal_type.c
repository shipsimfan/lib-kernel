#include <los/signal.h>

#include <los/syscall.h>

void set_process_signal_type(u8 sig, usize type) {
    system_call2(SET_PROCESS_SIGNAL_TYPE_SYSCALL, (usize)sig, type);
}