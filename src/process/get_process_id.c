#include <los/process.h>

#include <los/syscall.h>

ProcessID get_process_id() { return system_call0(GET_PROCESS_ID_SYSCALL); }