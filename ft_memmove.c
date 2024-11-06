/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill(char *t_dest, char *t_src, size_t n)
{
	size_t	i;

	i = 0;
	if (t_dest > t_src)
	{
		while (i < n)
		{
			t_dest[n - i - 1] = t_src[n - i - 1];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*t_dest;
	char	*t_src;

	if (!dest && !src)
		return (NULL);
	t_dest = (char *)dest;
	t_src = (char *)src;
	fill(t_dest, t_src, n);
	return (t_dest);
}

/*
#include <stdio.h>
int main(void)
{
	char src[50] = "Hello how are you";
	char dest[50];
	ft_memmove(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
*/
