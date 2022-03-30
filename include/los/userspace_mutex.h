#ifndef __LOS_USERSPACE_MUTEX_H
#define __LOS_USERSPACE_MUTEX_H

#include "types.h"

isize create_mutex(usize md);
isize lock_mutex(usize md);
isize try_lock_mutex(usize md);
void unlock_mutex(usize md);
void destroy_device(usize md);

#endif