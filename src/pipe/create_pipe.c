#include <los/syscall.h>
#include <los/pipe.h>



isize create_pipe(usize* prd, usize* pwd){
    return system_call2(CREATE_PIPE_SYSCALL, prd, pwd);

}