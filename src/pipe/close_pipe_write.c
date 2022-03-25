#include <los/pipe.h>
#include <los/syscall.h>

void close_pipe_write(usize pwd) {
    system_call1(CLOSE_PIPE_WRITE_SYSCALL, pwd);
}