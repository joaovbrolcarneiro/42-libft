#include <stdlib.h>

void *ft_calloc(size_t count, size_t size) {
    void *ptr;

    ptr = malloc(count * size);
    if (!ptr) {
        return NULL; // Ensure it returns NULL if allocation fails
    }

    // Set allocated memory to zero
    for (size_t i = 0; i < count * size; i++) {
        ((unsigned char *)ptr)[i] = 0;
    }

    return ptr;
}
