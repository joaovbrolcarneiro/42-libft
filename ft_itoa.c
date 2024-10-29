#include <stdlib.h>

static size_t ft_intlen(int n) {
    size_t len = (n <= 0) ? 1 : 0;
    while (n) {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n) {
    char *str;
    size_t len = ft_intlen(n);
    unsigned int num = (n < 0) ? -n : n;

    if (!(str = (char *)malloc((len + 1) * sizeof(char)))) return NULL;
    str[len--] = '\0';
    if (n < 0) str[0] = '-';
    while (num) {
        str[len--] = (num % 10) + '0';
        num /= 10;
    }
    if (n == 0) str[0] = '0';
    return str;
}