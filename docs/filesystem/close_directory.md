# Close Directory
Close a directory descriptor

## Definition

```c
#include <los/filesystem.h>

void close_directory(usize dd);
```

## Description
**close_directory()** closes the directory descriptor *dd*. *dd* may not be reused after.

## Return Value
**close_directory()** returns no value.

## Errors
No errors are possible with this system call.