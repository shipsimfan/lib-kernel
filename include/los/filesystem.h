#ifndef __LOS_FILESYSTEM_H
#define __LOS_FILESYSTEM_H

#include "types.h"

#define SEEK_FROM_START 0
#define SEEK_FROM_CURRENT 1
#define SEEK_FROM_END 2

#define DIRENT_TYPE_DIRECTORY 0
#define DIRENT_TYPE_FILE 1

#define OPEN_READ 1
#define OPEN_WRITE 2
#define OPEN_READWRITE 3
#define OPEN_TRUNCATE 4
#define OPEN_APPEND 8
#define OPEN_CREATE 16

typedef struct {
    char name[256];
    usize type;
    usize size;
} Dirent;

isize open_file(const char* filepath, usize flags);
void close_file(usize fd);
isize seek_file(usize fd, usize offset, usize seek_from);
isize tell_file(usize fd);
isize read_file(usize fd, void* buffer, usize buffer_len);
isize write_file(usize fd, void* buffer, usize buffer_len);
isize truncate_file(usize fd, usize new_length);

isize open_directory(const char* path);
void close_directory(usize dd);
isize read_directory(usize dd, Dirent* dest);

isize create_directory(const char* path);
isize remove_file(const char* path);
isize remove_directory(const char* directory);

#endif