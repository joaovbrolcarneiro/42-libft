/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrol-ca <jbrol-ca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:11:25 by jbrol-ca          #+#    #+#             */
/*   Updated: 2024/10/31 19:20:26 by joaovbrolcarn    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_point.h"

t_point	create_point(int x, int y)
{
	t_point	point;

	point.x = x;
	point.y = y;
	return (point);
}

void	print_point(t_point p)
{
	printf("Point coordinates: (%d, %d)\n", p.x, p.y);
}

int	main(void)
{
	t_point	my_point;

	my_point = create_point(5, 10);
	print_point(my_point);
	return (0);
}
