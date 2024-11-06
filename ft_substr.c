/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	size;
	size_t	l;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		l = 1;
	else if (start + len > size)
		l = size - start + 1;
	else
		l = len + 1;
	p = (char *)malloc(l);
	if (p == NULL)
		return (NULL);
	i = 0;
	while ((start + i) < size && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main()
{
		char	*str = "0123456789";
		size_t	size = 10;

		char	*ret = ft_substr(str, 9, size);
		printf("%s\n", ret);
		printf("%d", ft_strlen(ret));
		return 0;
}*/
