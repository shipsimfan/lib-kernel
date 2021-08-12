# Close File
Close a file descriptor

## Definition

```c
#include <los/filesystem.h>

void close_file(uint64_t fd);
```

## Description
**close_file()** closes the file descriptor *fd*. *fd* may not be reused after.

## Return Value
**close_file()** returns no value.

## Errors
No errors are possible with this system call.