#ifndef __LOS_DEVICE_H
#define __LOS_DEVICE_H

#include "types.h"

isize open_device(const char *path);
void close_device(usize dd);
isize read_device(usize dd, usize address, void *buffer, usize buffer_len);
isize write_device(usize dd, usize address, const void *buffer,
                   usize buffer_len);
isize ioctrl_device(usize dd, usize code, usize argument);

isize list_device_children(const char *path, char **buffer, usize buffer_len,
                           usize string_len);

#endif