# Open File
Open a file descriptor and potentially create a file

## Definition

```c
#include <los/filesystem.h>

#define OPEN_READ
#define OPEN_WRITE
#define OPEN_READWRITE
#define OPEN_TRUNCATE
#define OPEN_APPEND
#define OPEN_CREATE

isize open_file(const char* filepath, usize flags);
```

## Description
**open_file()** opens the file at the location specified by *filepath*. If the file does not exist, it can optionally be created if the *OPEN_CREATE* flag is passed in *flags*.

**open_file()** creates a new file descriptor for the current process. A file descriptor is a non-negative integer that can be passed to other **\*_file()** functions. The file descriptor recoreds the file offset. The file descriptor can be used by any thread in the process that created it. Files cannot be removed while they are opened by a file descriptor.

*flags* must include one of: *OPEN_READ*, *OPEN_WRITE*, or *OPEN_READWRITE*.

The file descriptor will be opened at the beginning of the file unless the flag *OPEN_APPEND* is passed to *flags*.

If the *OPEN_TRUNCATE* flag is passed in *flags* then the file will be set to a length of zero before opening.

## Return Value
On success, the file descriptor is returned.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EARGSEC** - The *filepath* extends out of userspace.
 * **EILSEQ** - *filepath* is not valid UTF-8.
 * **EINVALIDARGUMENT**
    1. *flags* does not contain *OPEN_READ* *OPEN_WRITE*, or *OPEN_READWRITE*.
    2. *filepath* is an invalid path.
 * **ENOFS** - The filesystem specified in *filepath* does not exist.
 * **ENOTSUP** - The current process does not have a working directory.
 * **ENOENT** - The specified file could not be found. *Note:* The path may be a directory if this error is returned.
 * **EEXIST** - *filepath* already exists as a directory while creating the file was attempted.

*Note:* **open_file()** calls driver functions, errors other than those described above may be returned.
