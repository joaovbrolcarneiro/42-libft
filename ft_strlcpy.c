/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:02:08 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/01 20:02:12 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	n = ft_strlen(src);
	if (size == 0)
		return (n);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (n);
}

/*int main(void)
{
	char *src = "bleh bleh";
	char dest[10];
	ft_strlcpy(dest, src, 5);
	printf("%s \n", dest);
	printf("%zu \n", ft_strlcpy(dest, src, 8));
	return (0);
} */
