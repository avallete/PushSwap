/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:41:43 by avallete          #+#    #+#             */
/*   Updated: 2015/02/12 11:56:46 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_pushswap.h>

void	check_error(char **argv, int *tab, int argc)
{
	int			e;
	int			i;
	long int	tmp;

	e = 0;
	while (e < argc)
	{
		if (((tmp = ft_atoi(argv[e + 1]))) > INT_MAX || tmp < INT_MIN)
			ft_putendl("Error"), exit(1);
		else
			tab[e] = ft_atoi(argv[(argc - e)]);
		e++;
	}
	e = 0;
	while (e < argc)
	{
		i = e + 1;
		while (i < argc)
		{
			if (tab[e] == tab[i])
				ft_putendl("Error"), exit(1);
			i++;
		}
		e++;
	}
}

int		check_args(int argc, char **argv)
{
	int i;
	int e;

	i = 1;
	while (i < argc)
	{
		e = 0;
		while (argv[i][e] != '\0')
		{
			if (ft_isdigit(argv[i][e]) || (e == 0 && argv[i][e] == '-' && \
				ft_isdigit(argv[i][e + 1])))
				e++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}
