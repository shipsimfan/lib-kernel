#ifndef __LOS_PIPE_H
#define __LOS_PIPE_H

#include <los/types.h>

isize create_pipe(usize* prd, usize* pwd);
void close_pipe_read(usize* prd);
void close_pipe_write(usize* pwd);
isize write_pipe(usize pwd, void* buffer, usize buffer_len);
isize read_pipe(usize prd, void* buffer, usize buffer_len);


#endif 