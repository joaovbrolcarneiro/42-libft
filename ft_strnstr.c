/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little[0])
		return ((char *) big);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (big[j + i] == little[i]
			&& j + i < len && little[i])
			i++;
		if (little[i] == '\0')
			return ((char *)(big + j));
		j++;
	}
	return (NULL);
}

/*int main()
{
		char *haystack = "MZIRIBMZIRIBMZE123";
		char *needle = "MZIRIBMZE";
		size_t n = 9;
		printf("%p\n", NULL);
		printf("%s\n", ft_strnstr(haystack, needle, n));
		return 0;
}*/
