# Remove Directory
Remove a directory

## Defintion

```c
#include <los/filesystem.h>

isize remove_directory(const char* directory);
```

## Description
**remove_directory()** removes the directory located at *directory*. The directory cannot be removed if it is currently opened or is not empty.

## Return Value
On success, 0 is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EARGSEC** - The *directory* extends out of userspace.
 * **EILSEQ** - *directory* is not valid UTF-8.
 * **EINVALIDARGUMENT** - *directory* is an invalid path.
 * **ENOFS** - The filesystem specified in *directory* does not exist.
 * **ENOTSUP** - The current process does not have a working directory.
 * **EINUSE** - The directory located at *directory* is still in use.
 * **ENOTEMPTY** - The directory located at *directory* is not empty.