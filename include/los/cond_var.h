#ifndef __LOS_COND_VAR_H
#define __LOS_COND_VAR_H

#include "types.h"

isize create_cond_var();
isize wait_cond_var(isize cond, isize md);
isize signal_cond_var(isize md);
isize broadcast_cond_var(isize cond);
isize destroy_cond_var(isize md);

#endif