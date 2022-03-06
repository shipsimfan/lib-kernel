#include <los/signal.h>

#include <los/syscall.h>

isize raise_self(u8 sig) {
    return system_call1(RAISE_SELF_SYSCALL, (usize)sig);
}