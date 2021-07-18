#ifndef __LOS_FILESYSTEM_H
#define __LOS_FILESYSTEM_H

#include <stddef.h>
#include <stdint.h>

#define SEEK_FROM_START 0
#define SEEK_FROM_CURRENT 1
#define SEEK_FROM_END 2

#define DIRENT_TYPE_DIRECTORY 0
#define DIRENT_TYPE_FILE 1

typedef struct {
    char name[256];
    size_t type;
    size_t size;
} Dirent;

uint64_t open_file(const char* filepath);
void close_file(uint64_t fd);
uint64_t seek_file(uint64_t fd, uint64_t offset, uint64_t seek_from);
uint64_t read_file(uint64_t fd, void* buffer, uint64_t buffer_len);

uint64_t open_directory(const char* path);
void close_directory(uint64_t dd);
uint64_t read_directory(uint64_t dd, Dirent* dest);

#endif