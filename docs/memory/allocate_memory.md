# Allocate Memory
Allocate a block of memory from the heap

## Definition

```c
#include <los/memory.h>

void* allocate_memory(usize size, usize alignment);
```

## Description
**allocate_memory()** allocates a block of memory that is *size* bytes large with an alignment according to *alignment*.

## Return Value
On success, the aligned pointer is returned to the newly allocated block.

On error, a NULL pointer is returned.