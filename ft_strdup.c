#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s) {
    size_t len = strlen(s);
    char *dup = malloc(len + 1); // Allocate memory for the duplicate string

    if (!dup) {
        return NULL; // Return NULL if memory allocation fails
    }

    // Copy the string to the allocated memory
    for (size_t i = 0; i < len; i++) {
        dup[i] = s[i];
    }
    dup[len] = '\0'; // Null-terminate the duplicate string

    return dup;
}
