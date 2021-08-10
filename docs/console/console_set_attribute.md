# Set Console Attribute
Sets the console's attributes

## Definition

```c
#include <los/console.h>

#define CONSOLE_STYLE_RESET
#define CONSOLE_STYLE_BOLD
#define CONSOLE_STYLE_DIM
#define CONSOLE_STYLE_UNDERLINE
#define CONSOLE_STYLE_STRIKETHROUGH

int64_t console_set_attribute(uint64_t attribute);
```

## Description
**console_set_attribute()** sets the console's attributes to *attribute* for future writes. *attribute* can either be *CONSOLE_STYLE_RESET* or an or'ed combination of the other *CONSOLE_STYLE_* defines. If an attribute is not specified, it will be disabled. Invalid attribute specifiers are ignored.

## Return Value
On success, **console_set_attribute()** returns 0.

On error, a negative number corrisponding to the error is returned.

## Errors
 * **EINVSESSION** - The current process is not running in a console session.

 *Note:* **console_set_attribute()** calls driver functions, errors other than those described above may be returned.