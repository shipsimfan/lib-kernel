#include <los/signal.h>

#include <los/syscall.h>

void set_userspace_signal_handler(SignalHandler handler) {
    system_call1(SET_USERSPACE_SIGNAL_HANDLER_SYSCALL, (usize)handler);
}