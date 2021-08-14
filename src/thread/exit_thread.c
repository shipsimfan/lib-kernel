#include <los/thread.h>

#include "tls.h"
#include <los/syscall.h>

extern void* get_fs_base();

void exit_thread(isize status) {
    ThreadStruct* ptr = get_fs_base();

    destroy_tls(ptr);

    system_call1(EXIT_THREAD_SYSCALL, (usize)status);

    while (1)
        ;
}