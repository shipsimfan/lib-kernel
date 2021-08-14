# Tell File
Get the current position of a file descriptor

## Definition

```c
#include <los/filesystem.h>

isize tell_file(usize fd);
```

## Description
**tell_file()** gets the current offset of file descriptor *fd* in bytes.

## Return Value
On success, the current offset of *fd* in bytes is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EBADD** - *fd* is not a valid file descriptor.