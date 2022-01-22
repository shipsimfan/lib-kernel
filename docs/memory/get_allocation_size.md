## Get Allocation Size
Get the size of an allocated block of memory

## Definition

```c
#include <los/memory.h>

usize get_allocation_size(void* ptr);
```

## Description
Gets the size in bytes of the allocated block of memory located at *ptr*.

## Return Value
Returns the size of the allocated block of memory in bytes.