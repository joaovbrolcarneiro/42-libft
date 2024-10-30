#include "libft.h"

void ft_bzero(void *s, size_t n) {
    ft_memset(s, 0, n);  // Ensure ft_memset is called correctly
}
