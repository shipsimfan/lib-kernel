#ifndef __LOS_SYSCALL_H
#define __LOS_SYSCALL_H

#include <stdint.h>

#define system_call0(code) system_call(code, 0, 0, 0, 0, 0)
#define system_call1(code, arg1) system_call(code, arg1, 0, 0, 0, 0)
#define system_call2(code, arg1, arg2) system_call(code, arg1, arg2, 0, 0, 0)
#define system_call3(code, arg1, arg2, arg3) system_call(code, arg1, arg2, arg3, 0, 0)
#define system_call4(code, arg1, arg2, arg3, arg4) system_call(code, arg1, arg2, arg3, arg4, 0)
#define system_call5(code, arg1, arg2, arg3, arg4, arg5) system_call(code, arg1, arg2, arg3, arg4, arg5)

uint64_t system_call(uint64_t code, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5);

#endif