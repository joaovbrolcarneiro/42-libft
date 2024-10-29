#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    char *mapped;
    size_t i;

    if (!s || !f) return NULL;
    if (!(mapped = (char *)malloc((ft_strlen(s) + 1) * sizeof(char)))) return NULL;
    i = 0;
    while (s[i]) {
        mapped[i] = f(i, s[i]);
        i++;
    }
    mapped[i] = '\0';
    return mapped;
}