#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    size_t i = 0;
    unsigned char *ptr1 = (unsigned char *)s1;
    unsigned char *ptr2 = (unsigned char *)s2;
    while (i < n) {
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return (0);
}