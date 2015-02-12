/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:48:50 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 13:28:19 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

int		find_min(int *a, int max)
{
	int e;
	int nb;

	e = max;
	nb = a[e];
	while (e > -1)
	{
		if (nb > a[e])
			nb = a[e];
		e--;
	}
	return (nb);
}

int		get_dist(int nb, int *a, int max)
{
	int place;
	int tmp;

	place = 0;
	while (place <= max)
	{
		if (a[place] == nb)
		{
			tmp = place - max;
			if (tmp < 0)
				tmp = -tmp;
			return (tmp);
		}
		place++;
	}
	return (0);
}

void	push_min(t_ps *stack)
{
	int	min;
	int dist;

	min = find_min(stack->a, stack->topa);
	if (((dist = get_dist(min, stack->a, stack->topa))) > 1)
	{
		while (stack->a[stack->topa] > min)
			dist >= stack->topa / 2 ? rrs(stack, 1) : \
					rs(stack, 1), ft_putchar(' ');
	}
	else if (dist == 1)
	{
		sw(stack, 0);
		if (!(is_sort(stack->a, stack->topa)) || stack->topb > -1)
			ft_putchar(' ');
	}
	if (!(is_sort(stack->a, stack->topa)))
		push_stack(stack, 1), ft_putchar(' ');
}

void	resolve_stack(t_ps *stack)
{
	int	flags;

	flags = 1;
	while (flags)
	{
		if (!(is_sort(stack->a, stack->topa)))
			push_min(stack);
		else
			flags = 0;
	}
	if (stack->topb > -1)
	{
		while (stack->topb > 0)
			push_stack(stack, 0), ft_putchar(' ');
		push_stack(stack, 0), ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
