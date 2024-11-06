/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int main(void)
{
	char str[50] = "Hello how are you";
	printf("%s\n", str);
	ft_memset(str, '$', 5);
	printf("%s\n", str);
	return (0);
}
*/
