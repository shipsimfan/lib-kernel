#ifndef __LOS_SYSCALL_H
#define __LOS_SYSCALL_H

#include "types.h"

// PROCESS SYSTEM CALLS (0x0000 - 0x0FFF)
#define WAIT_PROCESS_SYSCALL 0x0000
#define EXECUTE_SYSCALL 0x0001
#define GET_CURRENT_WORKING_DIRECTORY_SYSCALL 0x0002
#define SET_CURRENT_WORKING_DIRECTORY_SYSCALL 0x0003
#define EXIT_PROCESS_SYSCALL 0x0004
#define KILL_PROCESS_SYSCALL 0x0005

// THREAD SYSTEM CALLS (0x1000 - 0x1FFF)
#define EXIT_THREAD_SYSCALL 0x1000
#define WAIT_THREAD_SYSCALL 0x1001
#define CREATE_THREAD_SYSCALL 0x1002
#define SET_TLS_BASE_SYSCALL 0x1003

// FILE SYSTEM CALLS (0x2000 - 0x2FFF)
#define OPEN_FILE_SYSCALL 0x2000
#define CLOSE_FILE_SYSCALL 0x2001
#define SEEK_FILE_SYSCALL 0x2002
#define READ_FILE_SYSCALL 0x2003
#define OPEN_DIRECTORY_SYSCALL 0x2004
#define CLOSE_DIRECTORY_SYSCALL 0x2005
#define READ_DIRECTORY_SYSCALL 0x2006
#define TRUNCATE_FILE_SYSCALL 0x2007
#define WRITE_FILE_SYSCALL 0x2008
#define REMOVE_FILE_SYSCALL 0x2009
#define REMOVE_DIRECTORY_SYSCALL 0x200A
#define CREATE_DIRECTORY_SYSCALL 0x200B
#define TELL_FILE_SYSCALL 0x200C

// CONSOLE SYSTEM CALLS (0x3000 - 0x3FFF)
#define CONSOLE_WRITE_CH_SYSCALL 0x3000
#define CONSOLE_WRITE_STR_SYSCALL 0x3001
#define CONSOLE_CLEAR_SYSCALL 0x3002
#define CONSOLE_SET_ATTRIBUTE_SYSCALL 0x3003
#define CONSOLE_SET_FOREGROUND_SYSCALL 0x3004
#define CONSOLE_SET_FOREGROUND_RGB_SYSCALL 0x3005
#define CONSOLE_SET_BACKGROUND_SYSCALL 0x3006
#define CONSOLE_SET_BACKGROUND_RGB_SYSCALL 0x3007
#define CONSOLE_SET_CURSOR_POS_SYSCALL 0x3008
#define CONSOLE_GET_WIDTH_SYSCALL 0x3009
#define CONSOLE_GET_HEIGHT_SYSCALL 0x300A
#define CONSOLE_WRITE_SYSCALL 0x300B

// EVENT SYSTEM CALLS (0x4000 - 0x4FFF)
#define PEEK_EVENT_SYSCALL 0x4000

// TIME SYSTEM CALLS (0x5000 - 0x5FFF)
#define GET_PROCESS_TIME_SYSCALL 0x5000
#define GET_TIME_ZONE_SYSCALL 0x5001
#define GET_EPOCH_TIME_SYSCALL 0x5002

// DEVICE SYSTEM CALLS (0x6000 - 0x6FFF)
#define OPEN_DEVICE_SYSCALL 0x6000
#define CLOSE_DEVICE_SYSCALL 0x6001
#define READ_DEVICE_SYSCALL 0x6002
#define WRITE_DEVICE_SYSCALL 0x6003
#define IOCTRL_DEVICE_SYSCALL 0x6004
#define LIST_DEVICE_CHILDREN_SYSCALL 0x6005

#define system_call0(code) system_call(code, 0, 0, 0, 0, 0)
#define system_call1(code, arg1) system_call(code, arg1, 0, 0, 0, 0)
#define system_call2(code, arg1, arg2) system_call(code, arg1, arg2, 0, 0, 0)
#define system_call3(code, arg1, arg2, arg3)                                   \
    system_call(code, arg1, arg2, arg3, 0, 0)
#define system_call4(code, arg1, arg2, arg3, arg4)                             \
    system_call(code, arg1, arg2, arg3, arg4, 0)
#define system_call5(code, arg1, arg2, arg3, arg4, arg5)                       \
    system_call(code, arg1, arg2, arg3, arg4, arg5)

isize system_call(usize code, usize arg1, usize arg2, usize arg3, usize arg4,
                  usize arg5);

#endif