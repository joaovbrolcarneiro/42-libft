#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len) {
    size_t i;
    if (!dst && !src) return NULL;
    if (dst < src) {
        i = 0;
        while (i < len) {
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }
    } else {
        while (len--) {
            ((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
        }
    }
    return dst;
}