/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 16:52:54 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 12:23:41 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

void	push_stack(t_ps *stack, int mode)
{
	int tmp;
	int	*src;
	int *dst;
	int *top;

	mode ? (src = stack->a) :\
	(src = stack->b);
	mode ? (dst = stack->b) :\
	(dst = stack->a);
	mode ? (top = &stack->topa) :\
	(top = &stack->topb);
	if (*top > -1)
	{
		mode ? ft_putstr("pb") : ft_putstr("pa");
		tmp = src[*top];
		*top -= 1;
		mode ? (top = &stack->topb) :\
		(top = &stack->topa);
		*top += 1;
		dst[*top] = tmp;
	}
	stack->debug ? print_debug(stack) : (mode = mode);
}
