#ifndef __LOS_TYPES_H
#define __LOS_TYPES_H 1

#include <stdint.h>

#define false 0
#define true 1

typedef __INTPTR_TYPE__ isize;
typedef __UINTPTR_TYPE__ usize;

typedef __UINT8_TYPE__ u8;
typedef __INT8_TYPE__ i8;
typedef __UINT16_TYPE__ u16;
typedef __INT16_TYPE__ i16;
typedef __UINT32_TYPE__ u32;
typedef __INT32_TYPE__ i32;
typedef __UINT64_TYPE__ u64;
typedef __INT64_TYPE__ i64;

typedef usize bool;

#endif