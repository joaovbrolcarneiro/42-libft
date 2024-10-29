#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) {
    size_t i = 0;
    unsigned char *ptr = (unsigned char *)s;
    while (i < n) {
        if (ptr[i] == (unsigned char)c)
            return (&ptr[i]);
        i++;
    }
    return (NULL);
}