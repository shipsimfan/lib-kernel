#include <los/syscall.h>
#include <los/pipe.h>


isize read_pipe(usize prd, void* buffer, usize buffer_len){
    return system_call3(READ_PIPE_SYSCALL, prd, buffer, buffer_len);
} 