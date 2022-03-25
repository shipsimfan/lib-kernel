#include <los/syscall.h>
#include <los/pipe.h>



isize write_pipe(usize pwd, void* buffer, usize buffer_len){
    return system_call3(WRITE_PIPE_SYSCALL, pwd, buffer, buffer_len);
}