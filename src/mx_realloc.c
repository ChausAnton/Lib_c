#include "../inc/libmx.h"
void *mx_realloc(void *ptr, size_t size) {
    void *temp;

    temp = malloc(size);
    mx_memmove(temp, ptr, size);
    free(ptr);
    return temp;
}
