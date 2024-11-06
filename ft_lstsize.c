/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 19:17:39 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/02 19:17:45 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*a;
	int		i;

	a = lst;
	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
	t_list *arr;
	char *a = "hello";
	arr = ft_lstnew(a);
	arr->next = ft_lstnew(a);
	printf("%i\n", ft_lstsize(arr));
	return 0;
}
*/
