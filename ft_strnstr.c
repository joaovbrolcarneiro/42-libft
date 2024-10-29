#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len) {
    size_t i = 0;
    size_t j;
    if (!*needle)
        return ((char *)haystack);
    while (haystack[i] && i < len) {
        j = 0;
        while (haystack[i + j] == needle[j] && i + j < len) {
            if (!needle[j + 1])
                return ((char *)&haystack[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}