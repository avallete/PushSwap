/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:38:19 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 12:03:45 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

void	rrotate_stack(int *stack, int top)
{
	int tmp;
	int tmp2;
	int e;

	e = top;
	if (top > 0)
	{
		tmp = stack[e];
		while (e > 0)
		{
			tmp2 = stack[e - 1];
			stack[e - 1] = tmp;
			tmp = tmp2;
			e--;
		}
		stack[top] = tmp;
	}
}

void	rotate_stack(int *stack, int top)
{
	int tmp;
	int tmp2;
	int e;

	e = 0;
	if (top > 0)
	{
		tmp = stack[e];
		while (e < top)
		{
			tmp2 = stack[e + 1];
			stack[e + 1] = tmp;
			tmp = tmp2;
			e++;
		}
		stack[0] = tmp;
	}
}

void	rrs(t_ps *stack, int mode)
{
	if (mode == 3)
	{
		ft_putstr("rrr"), rrotate_stack(stack->a, stack->topa);
		rrotate_stack(stack->b, stack->topb);
	}
	else if (mode == 2)
		ft_putstr("rrb"), rrotate_stack(stack->b, stack->topb);
	else
		ft_putstr("rra"), rrotate_stack(stack->a, stack->topa);
	stack->debug ? print_debug(stack) : (mode = mode);
}

void	rs(t_ps *stack, int mode)
{
	if (mode == 3)
	{
		ft_putstr("rr"), rotate_stack(stack->a, stack->topa);
		rotate_stack(stack->b, stack->topb);
	}
	else if (mode == 2)
		ft_putstr("rb"), rotate_stack(stack->b, stack->topb);
	else
		ft_putstr("ra"), rotate_stack(stack->a, stack->topa);
	stack->debug ? print_debug(stack) : (mode = mode);
}
