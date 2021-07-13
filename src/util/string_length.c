#include <los/util.h>

uint64_t string_length(const char* string) {
    uint64_t len = 0;
    while (*string != 0) {
        string++;
        len++;
    }
    return len;
}