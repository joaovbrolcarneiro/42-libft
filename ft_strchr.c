#include <stddef.h> // Add this line for NULL
#include "libft.h"  // Include your custom header if needed

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c) {
            return (char *)s; // Return pointer to the character found
        }
        s++;
    }
    return (NULL); // Return NULL if the character is not found
}
