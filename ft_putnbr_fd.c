/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	a;

	i = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		i = -i;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
	{
		a = i + 48;
		write(fd, &a, 1);
	}
}

/*#include <fcntl.h>
int main(void)
{
	int	fd;

	fd = open("test", O_RDWR | O_CREAT, 0666);
	ft_putnbr_fd(1233, fd);
	close(fd);
	return 0;
}*/
