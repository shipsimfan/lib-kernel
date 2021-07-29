#ifndef __LOS_FILESYSTEM_H
#define __LOS_FILESYSTEM_H

#include <stddef.h>
#include <stdint.h>

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
    size_t type;
    size_t size;
} Dirent;

int64_t open_file(const char* filepath, uint64_t flags);
void close_file(uint64_t fd);
int64_t seek_file(uint64_t fd, uint64_t offset, uint64_t seek_from);
int64_t read_file(uint64_t fd, void* buffer, uint64_t buffer_len);
int64_t truncate_file(uint64_t fd, uint64_t new_length);

int64_t open_directory(const char* path);
void close_directory(uint64_t dd);
int64_t read_directory(uint64_t dd, Dirent* dest);

#endif