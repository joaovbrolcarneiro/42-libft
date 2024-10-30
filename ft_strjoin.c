#include "libft.h"  // Inclui o cabeçalho da libft

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    size_t  len1;
    size_t  len2;

    // Verifica se as strings são nulas
    if (!s1 || !s2)
        return (NULL);

    // Calcula o comprimento das strings
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    // Aloca memória para a nova string
    join = (char *)malloc((len1 + len2 + 1) * sizeof(char));  // +1 para o caractere nulo
    if (!join)
        return (NULL);  // Retorna NULL se a alocação falhar

    // Copia as strings para a nova string
    ft_strlcpy(join, s1, len1 + 1);          // Copia s1 para join
    ft_strlcat(join, s2, len1 + len2 + 1);   // Anexa s2 a join

    return (join);
}
