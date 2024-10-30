#include "libft.h"  // Inclui o cabeçalho da libft

void ft_putendl_fd(char *s, int fd) {
    if (s)  // Verifica se a string não é nula
    {
        ft_putstr_fd(s, fd);  // Chama a função para imprimir a string
        write(fd, "\n", 1);   // Adiciona uma nova linha
    }
}
