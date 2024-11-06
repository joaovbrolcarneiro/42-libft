/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

/*#include <fcntl.h>
int main(void)
{
	int	fd;

	fd = open("test", O_RDWR | O_CREAT, 0666);
	ft_putendl_fd('c', fd);
	close(fd);
	return 0;
}*/
