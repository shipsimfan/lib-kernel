# Remove File
Remove a file

## Defintion

```c
#include <los/filesystem.h>

int64_t remove_file(const char* path);
```

## Description
**remove_file()** removes the file located at *path*. The file cannot be removed if it is currently opened.

## Return Value
On success, 0 is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EARGSEC** - The *path* extends out of userspace.
 * **EILSEQ** - *path* is not valid UTF-8.
 * **EINVALIDARGUMENT** - *path* is an invalid path.
 * **ENOFS** - The filesystem specified in *path* does not exist.
 * **ENOTSUP** - The current process does not have a working directory.
 * **EINUSE** - The file located at *path* is still in use.