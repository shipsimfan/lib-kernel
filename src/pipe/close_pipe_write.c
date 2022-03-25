#include <los/syscall.h>
#include <los/pipe.h>


void close_pipe_write(usize* pwd){
    system_call1(CLOSE_PIPE_WRITE_SYSCALL, pwd);
}