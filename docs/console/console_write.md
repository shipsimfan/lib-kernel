# Write to Console
Write characters to the console

## Definition

```c
#include <los/console.h>

isize console_write(const char* string, usize string_length);
isize console_write_ch(char character);
isize console_write_str(const char* string);
```

## Description
**console_write()** writes *string_length* bytes from *string* to the console.

**console_write_ch()** writes *character* to the console.

**console_write_str()** writes bytes from *string* until a null-terminator is found.

## Return Value
On success, all three functions return 0.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EINVSESSION** - The current process is not running in a console session.
 * **EARGSEC** - The specified buffer extends out of userspace.
 * **EILSEQ** - The provided string is not valid UTF-8.

*Note:* All three functions call driver functions, errors other than those described above may be returned.