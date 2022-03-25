#include <los/pipe.h>
#include <los/syscall.h>

isize write_pipe(usize pwd, void* buffer, usize buffer_len) {
    return system_call3(WRITE_PIPE_SYSCALL, pwd, (usize)buffer, buffer_len);
}