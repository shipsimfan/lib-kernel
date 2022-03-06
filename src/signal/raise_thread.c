#include <los/signal.h>

#include <los/syscall.h>

isize raise_thread(usize tid, u8 sig) {
    return system_call2(RAISE_THREAD_SYSCALL, tid, (usize)sig);
}