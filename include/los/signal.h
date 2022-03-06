#ifndef __LOS_SIGNAL_H
#define __LOS_SIGNAL_H

#include <los/types.h>

#define SIGNAL_ABORT 0
#define SIGNAL_FLOATING_POINT_EXCEPTION 1
#define SIGNAL_ILLEGAL_INSTRUCTION 2
#define SIGNAL_INTERRUPT 3
#define SIGNAL_SEGMENTATION_VIOLATION 4
#define SIGNAL_TERMINATE 5
#define SIGNAL_KILL 6

#define SIGNAL_TYPE_TERMINATE 0
#define SIGNAL_TYPE_IGNORE 1

isize raise_process_s(usize sid, usize pid, u8 sig);
isize raise_process(usize pid, u8 sig);
isize raise_thread(usize tid, u8 sig);
void raise_self(u8 sig);

void set_thread_signal_type(u8 sig, usize type);
void set_process_signal_type(u8 sig, usize type);

#endif