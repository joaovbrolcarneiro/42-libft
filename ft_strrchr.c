#include <stddef.h> // Add this line for NULL
#include "libft.h"  // Include your custom header if needed

char *ft_strrchr(const char *s, int c) {
    const char *last = NULL;
    while (*s) {
        if (*s == (char)c)
            last = s;
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return ((char *)last);
}
