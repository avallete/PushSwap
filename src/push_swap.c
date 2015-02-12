/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 12:27:44 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 12:03:08 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

void	ft_pushswap(int argc, char **argv, int debug)
{
	int		a[argc - 1];
	int		b[argc - 1];
	t_ps	stack;

	check_error(argv, a, argc);
	stack.a = a;
	stack.b = b;
	stack.topa = argc - 1;
	stack.topb = -1;
	stack.debug = debug;
	resolve_stack(&stack);
}

int		main(int argc, char **argv)
{
	int debug;

	debug = 0;
	if (argc > 2)
	{
		if (ft_strcmp(argv[1], "-v") == 0)
			debug = 1;
		if (check_args(argc - debug, argv + debug))
			ft_pushswap((argc - 1) - debug, argv + debug, debug);
		else
			ft_putendl("Error");
	}
	return (0);
}
