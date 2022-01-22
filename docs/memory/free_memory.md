# Free Memory
Release in-use memory from the heap

## Definition

```c
#include <los/memory.h>

void free_memory(void* ptr);
```

### Description
**free_memory()** releases the block of memory at *ptr*. *ptr* may not be reused after. The memory space at *ptr* may be allocated by the **allocate_memory()** function later.

## Return Value
**free_memory()** does not return an error.

## Errors
No errors are possible with this system call.