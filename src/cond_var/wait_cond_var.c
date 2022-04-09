#include <los/cond_var.h>

#include <los/userspace_mutex.h>

#include <los/syscall.h>

isize wait_cond_var(isize cond, isize md) {
    unlock_mutex(md);
    isize wait = system_call2(WAIT_COND_VAR_SYSCALL, cond, md); 
    lock_mutex(md);
    return wait;
}