#include "libft.h"  // Inclui o cabeçalho da libft

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;

    // Verifica se a string ou o conjunto é nulo
    if (!s1 || !set)
        return (NULL);

    start = 0;
    // Encontra o primeiro caractere que não está no conjunto
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1);
    // Encontra o último caractere que não está no conjunto
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    // Retorna a substring trimada
    return (ft_substr(s1, start, end - start));
}
