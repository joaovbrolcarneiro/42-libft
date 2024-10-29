#include <stdlib.h>
#include <stddef.h>

char *ft_strjoin(char const *s1, char const *s2) {
    char *join;
    size_t i, j;

    if (!s1 || !s2) return NULL;
    join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!join) return NULL;
    i = 0;
    while (s1[i]) {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j]) join[i++] = s2[j++];
    join[i] = '\0';
    return join;
}