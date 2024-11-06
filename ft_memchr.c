/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*sv;

	d = (unsigned char)c;
	sv = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(sv) == d)
			return ((void *)sv);
		sv++;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_memchr("Hello how", 'h', 3));
	return 0;
}*/
