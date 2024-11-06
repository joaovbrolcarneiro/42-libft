/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
	{
		i = c + ('a' - 'A');
		return (i);
	}
	return (c);
}

/*
#include <stdio.h>
int main(void)
{
	char a;
	char b;

	a = 'A';
	b = 'b';
	printf("%c\n%c\n", ft_tolower(a), ft_tolower(b));
	return 0;
}*/
