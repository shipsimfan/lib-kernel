#ifndef __LOS_SIGNAL_H
#define __LOS_SIGNAL_H

#include <los/types.h>

#define SIGNAL_KILL 0
#define SIGNAL_TERMINATE 1
#define SIGNAL_ABORT 2
#define SIGNAL_INTERRUPT 3
#define SIGNAL_ALARM 4

#define SIGNAL_TYPE_TERMINATE 0
#define SIGNAL_TYPE_IGNORE 1
#define SIGNAL_TYPE_USERSPACE 2

typedef struct {
    usize r15;
    usize r14;
    usize r13;
    usize r12;
    usize r11;
    usize r10;
    usize r9;
    usize r8;
    usize rbp;
    usize rdi;
    usize rsi;
    usize rdx;
    usize rcx;
    usize rbx;
    usize rax;
    usize rflags;
    usize rip;
} SignalContext;

typedef void (*SignalHandler)(u8, SignalContext);

isize raise_session(usize sid, usize pid, u8 sig);
isize raise_process(usize pid, u8 sig);
void raise_self(u8 sig);

void set_signal_type(u8 sig, usize type);
void mask_signal(u8 sig);
void unmask_signal(u8 sig);
void set_userspace_signal_handler(SignalHandler handler);

#endif