#include <los/process.h>

#include <los/syscall.h>

void exit_process(isize status) {
    system_call1(EXIT_PROCESS_SYSCALL, (usize)status);
    while (1)
        ;
}