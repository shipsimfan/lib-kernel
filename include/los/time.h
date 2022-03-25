#ifndef __LOS_TIME_H
#define __LOS_TIME_H

#include "types.h"

isize get_process_time();
isize get_time_zone();
isize get_epoch_time();
void set_alarm(usize milliseconds);
void sleep(usize duration);

#endif