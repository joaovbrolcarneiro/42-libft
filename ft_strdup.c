/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <jbrol-ca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:50:00 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/10/31 20:41:43 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static void	copy_str(char *dup, const char *s, size_t index)
{
	if (s[index] == '\0')
		dup[index] = '\0';
	else
	{
		dup[index] = s[index];
		copy_str(dup, s, index + 1);
	}
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	copy_str(dup, s, 0);
	return (dup);
}
