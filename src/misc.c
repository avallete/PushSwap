/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:46:41 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 13:50:15 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

int		is_sort(int *tab, int max)
{
	int e;
	int i;

	e = 0;
	while (e < max)
	{
		i = e + 1;
		if (tab[i] > tab[e])
			return (0);
		e++;
	}
	return (1);
}

void	print_debug(t_ps *stack)
{
	int e;

	e = 0;
	ft_putstr("\n\n");
	ft_putstr("\033[0;33m A \033[0m: ");
	while (e <= stack->topa)
		ft_printf("\033[0;33m %d \033[0m", stack->a[e++]);
	e = 0;
	ft_putstr("\n\n");
	ft_putstr("\033[0;36m B \033[0m: ");
	while (e <= stack->topb)
		ft_printf("\033[0;36m %d \033[0m", stack->b[e++]);
	ft_putstr("\n\n");
}
