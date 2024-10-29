#include <stdlib.h>

static size_t ft_wordcount(char const *s, char c) {
    size_t count = 0;
    int in_substring = 0;
    while (*s) {
        if (*s != c && !in_substring) {
            in_substring = 1;
            count++;
        } else if (*s == c) in_substring = 0;
        s++;
    }
    return count;
}

static char *ft_worddup(const char *s, size_t len) {
    char *word = (char *)malloc((len + 1) * sizeof(char));
    size_t i = 0;
    if (!word) return NULL;
    while (i < len) {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return word;
}

char **ft_split(char const *s, char c) {
    char **array;
    size_t i = 0, j = 0, word_start;

    if (!s || !(array = malloc((ft_wordcount(s, c) + 1) * sizeof(char *)))) return NULL;
    while (s[i]) {
        if (s[i] != c) {
            word_start = i;
            while (s[i] && s[i] != c) i++;
            array[j++] = ft_worddup(s + word_start, i - word_start);
        } else i++;
    }
    array[j] = NULL;
    return array;
}