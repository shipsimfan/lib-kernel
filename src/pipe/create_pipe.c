#include <los/pipe.h>
#include <los/syscall.h>

isize create_pipe(usize* prd, usize* pwd) {
    return system_call2(CREATE_PIPE_SYSCALL, (usize)prd, (usize)pwd);
}