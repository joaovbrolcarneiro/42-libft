#include "libft.h"  // Inclui o cabeçalho da libft

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *mapped;
    size_t  i;

    // Verifica se a string ou a função é nula
    if (!s || !f)
        return (NULL);

    // Aloca memória para a nova string
    if (!(mapped = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
        return (NULL);

    // Aplica a função 'f' em cada caractere da string
    i = 0;
    while (s[i])
    {
        mapped[i] = f(i, s[i]);  // Aplica a função f e armazena o resultado
        i++;
    }
    mapped[i] = '\0';  // Adiciona o terminador nulo

    return (mapped);  // Retorna a nova string mapeada
}
