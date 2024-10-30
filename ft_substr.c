#include "libft.h"  // Inclui o cabeçalho da libft

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  s_len;

    // Verifica se a string é nula ou se o início é maior ou igual ao comprimento da string
    if (!s)
        return (NULL);
    
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup(""));  // Retorna string vazia se o início está fora do intervalo

    // Ajusta o tamanho do substring se for maior que o restante da string
    if (len > s_len - start)
        len = s_len - start;

    // Aloca memória para o substring
    substr = (char *)malloc(len + 1);  // +1 para o caractere nulo
    if (!substr)
        return (NULL);  // Retorna NULL se a alocação falhar

    // Copia o substring da string original
    ft_strlcpy(substr, s + start, len + 1);  // +1 para incluir o caractere nulo
    return (substr);
}
