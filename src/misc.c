/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:46:41 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 12:01:31 by avallete         ###   ########.fr       */
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
	ft_putstr("\n****~~~~~~~~~~~~~~~~~~~~~~****\n");
	ft_putstr("|A : ");
	while (e <= stack->topa)
		ft_printf("%d ", stack->a[e++]);
	e = 0;
	ft_putstr("|\n========================\n");
	ft_putstr("|B : ");
	while (e <= stack->topb)
		ft_printf("%d ", stack->b[e++]);
	ft_putstr("|\n****_______________________****\n");
}
