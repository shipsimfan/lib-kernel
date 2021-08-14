# System Calls
The following list of system calls is formatted
 * (System Call Number) - (System Call Define) - (System Call Function)

## Process System Calls
Process system calls range from 0x0000 to 0x0FFF
 * 0x0000 - WAIT_PROCESS_SYSCALL - [wait_process()](process/wait_process.md)
 * 0x0001 - EXECUTE_SYSCALL - [execute()](process/execute.md)
 * 0x0002 - GET_CURRENT_WORKING_DIRECTORY_SYSCALL - [get_current_working_directory()](process/get_current_working_directory.md)
 * 0x0003 - SET_CURRENT_WORKING_DIRECTORY_SYSCALL - [set_current_working_directory()](process/set_current_working_directory.md)
 * 0x0004 - EXIT_PROCESS_SYSCALL - [exit_process()](process/exit_process.md)
 * 0x0005 - KILL_PROCESS_SYSCALL - [kill_process()](process/kill_process.md)

## Thread System Calls
Thread system calls range from 0x1000 to 0x1FFF
 * 0x1000 - EXIT_THREAD_SYSCALL - [exit_thread()](thread/exit_thread.md)
 * 0x1001 - WAIT_THREAD_SYSCALL - [wait_thread()](thread/wait_thread.md)
 * 0x1002 - CREATE_THREAD_SYSCALL - [create_thread()](thread/create_thread.md)
 * 0x1003 - SET_TLS_BASE_SYSCALL - [set_tls_base()](thread/set_tls_base.md)

## Filesystem System Calls
Filesystem system calls range from 0x2000 to 0x2FFF
 * 0x2000 - OPEN_FILE_SYSCALL - [open_file()](filesystem/open_file.md)
 * 0x2001 - CLOSE_FILE_SYSCALL - [close_file()](filesystem/close_file.md)
 * 0x2002 - SEEK_FILE_SYSCALL - [seek_file()](filesystem/seek_file.md)
 * 0x2003 - READ_FILE_SYSCALL - [read_file()](filesystem/read_file.md)
 * 0x2004 - OPEN_DIRECTORY_SYSCALL - [open_directory()](filesystem/open_directory.md)
 * 0x2005 - CLOSE_DIRECTORY_SYSCALL - [close_directory()](filesystem/close_directory.md)
 * 0x2006 - READ_DIRECTORY_SYSCALL - [read_directory()](filesystem/read_directory.md)
 * 0x2007 - TRUNCATE_FILE_SYSCALL - [truncate_file()](filesystem/truncate_file.md)
 * 0x2008 - WRITE_FILE_SYSCALL - [write_file()](filesystem/write_file.md)
 * 0x2009 - REMOVE_FILE_SYSCALL - [remove_file()](filesystem/remove_file.md)
 * 0x200A - REMOVE_DIRECTORY_SYSCALL - [remove_directory()](filesystem/remove_directory.md)
 * 0x200B - CREATE_DIRECTORY_SYSCALL - [create_directory()](filesystem/create_directory.md)
 * 0x200C - TELL_FILE_SYSCALL - [tell_file()](filesystem/tell_file.md)

## Console System Calls
Console system calls range from 0x3000 to 0x3FFF
 * 0x3000 - CONSOLE_WRITE_CH_SYSCALL - [console_write_ch()](console/console_write.md)
 * 0x3001 - CONSOLE_WRITE_STR_SYSCALL - [console_write_str()](console/console_write.md)
 * 0x3002 - CONSOLE_CLEAR_SYSCALL - [console_clear()](console/console_clear.md)
 * 0x3003 - CONSOLE_SET_ATTRIBUTE_SYSCALL - [console_set_attribute()](console/console_set_attribute.md)
 * 0x3004 - CONSOLE_SET_FOREGROUND_SYSCALL - [console_set_foreground()](console/console_set_color.md)
 * 0x3005 - CONSOLE_SET_FOREGROUND_RGB_SYSCALL - [console_set_foreground_rgb()](console/console_set_color.md)
 * 0x3006 - CONSOLE_SET_BACKGROUND_SYSCALL - [console_set_background()](console/console_set_color.md)
 * 0x3007 - CONSOLE_SET_BACKGROUND_RGB_SYSCALL - [console_set_background_rgb()](console/console_set_color.md)
 * 0x3008 - CONSOLE_SET_CURSOR_POS_SYSCALL - [console_set_cursor_pos()](console/console_set_cursor_pos.md)
 * 0x3009 - CONSOLE_GET_WIDTH_SYSCALL - [console_get_width()](console/console_get_dimension.md)
 * 0x300A - CONSOLE_GET_HEIGHT_SYSCALL - [console_get_height()](console/console_get_dimension.md)
 * 0x300B - CONSOLE_WRITE_SYSCALL - [console_write()](console/console_write.md)

## Event System Calls
Event system calls range from 0x4000 to 0x4FFF
 * 0x4000 - PEEK_EVENT_SYSCALL - [peek_event()](event/peek_event.md)

## Time System Calls
Time system calls range from 0x5000 to 0x5FFF
 * 0x5000 - GET_PROCESS_TIME_SYSCALL - [get_process_time()](time/get_process_time.md)
 * 0x5001 - GET_TIME_ZONE_SYSCALL - [get_time_zone()](time/get_time_zone.md)
 * 0x5002 - GET_EPOCH_TIME_SYSCALL - [get_epoch_time()](time/get_epoch_time.md)