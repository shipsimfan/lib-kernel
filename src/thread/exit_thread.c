#include <los/thread.h>

#include "tls.h"
#include <los/syscall.h>

extern void* get_fs_base();

void exit_thread(int64_t status) {
    ThreadStruct* ptr = get_fs_base();

    destroy_tls(ptr);

    system_call1(EXIT_THREAD_SYSCALL, (uint64_t)status);

    while (1)
        ;
}