#include <los/signal.h>

#include <los/syscall.h>

isize raise_process(usize pid, u8 sig) {
    return system_call2(RAISE_PROCESS_SYSCALL, pid, (usize)sig);
}