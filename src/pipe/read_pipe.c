#include <los/pipe.h>
#include <los/syscall.h>

isize read_pipe(usize prd, void* buffer, usize buffer_len) {
    return system_call3(READ_PIPE_SYSCALL, prd, (usize)buffer, buffer_len);
}