/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:09:31 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/11/03 20:09:33 by jbrol-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_free(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	while (lst)
	{
		temp = lst;
		lst = lst->next;
		del(temp->content);
		free(temp);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	current = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_free(current, del);
			return (NULL);
		}
		if (!current)
			current = new_node;
		else
			ft_lstadd_back(&current, new_node);
		lst = lst->next;
	}
	return (current);
}
