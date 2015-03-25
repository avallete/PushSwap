/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:40:18 by avallete          #+#    #+#             */
/*   Updated: 2015/03/25 15:02:49 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

void	switch_stack(int *stack, int top)
{
	int tmp;

	if (top > 0)
	{
		tmp = stack[top];
		stack[top] = stack[top - 1];
		stack[top - 1] = tmp;
	}
}

void	sw(t_ps *stack, int mode)
{
	if (mode == 3)
	{
		ft_putstr("ss"), switch_stack(stack->a, stack->topa);
		switch_stack(stack->b, stack->topb);
	}
	else if (mode == 2)
		ft_putstr("sb"), switch_stack(stack->b, stack->topb);
	else
		ft_putstr("sa"), switch_stack(stack->a, stack->topa);
	stack->debug ? print_debug(stack) : (void)mode;
}

void	ft_switch(void *s, void *d)
{
	void *tmp;

	tmp = s;
	s = d;
	d = tmp;
}
