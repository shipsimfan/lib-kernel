#include <los/signal.h>

#include <los/syscall.h>

isize raise_session(usize sid, usize pid, u8 sig) {
    return system_call3(RAISE_SESSION_SYSCALL, sid, pid, (usize)sig);
}