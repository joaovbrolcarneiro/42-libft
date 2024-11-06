/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sv1;
	unsigned char	*sv2;

	i = 0;
	sv1 = (unsigned char *) s1;
	sv2 = (unsigned char *) s2;
	while (i < n)
	{
		if (*sv1 != *sv2)
			return (*sv1 - *sv2);
		sv1++;
		sv2++;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_memcmp("", "as", 4));
	return 0;
}*/
