#include <los/syscall.h>
#include <los/pipe.h>


 void close_pipe_read(usize* prd){
         system_call1(CLOSE_PIPE_READ_SYSCALL, prd);
 }