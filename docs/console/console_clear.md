# Clear Console
Clears the console

## Definition

```c
#include <los/console.h>

isize console_clear();
```

## Description
**console_clear()** clears the console and resets the cursor position to *(0, 0)*.

## Return Value
On success, **console_clear()** return 0.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EINVSESSION** - The current process is not running in a console session.

 *Note:* **console_clear()** calls driver functions, errors other than those described above may be returned.