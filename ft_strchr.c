/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	l;

	i = ft_strlen(s);
	l = 0;
	while (l <= i)
	{
		if (s[l] == (char)c)
			return ((char *)(s + l));
		l++;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%p\n", ft_strchr("teste", 1024));
	printf("%p\n", strchr("teste", 1024));
	return 0;
}*/
