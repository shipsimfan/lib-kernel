#include <los/pipe.h>
#include <los/syscall.h>

void close_pipe_read(usize prd) { system_call1(CLOSE_PIPE_READ_SYSCALL, prd); }