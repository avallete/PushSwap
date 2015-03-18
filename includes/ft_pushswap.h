/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallete <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 14:35:24 by avallete          #+#    #+#             */
/*   Updated: 2015/03/18 15:30:09 by avallete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H
# include <libft.h>
# include <ft_printf.h>

typedef	struct			s_ps
{
	int					*a;
	int					*b;
	int					topa;
	int					topb;
	char				debug;
}						t_ps;

/*
** Stack Functions
*/

void					ft_switch(void *s, void *d);
void					push_stack(t_ps *stack, int mode);
void					sw(t_ps *stack, int mode);
void					switch_stack(int *stack, int top);
void					rotate_stack(int *stack, int top);
void					rrotate_stack(int *stack, int top);
void					rs(t_ps *stack, int mode);
void					rrs(t_ps *stack, int mode);
void					print_debug(t_ps *stack);
int						check_args(int argc, char **argv);
void					check_error(char **argv, int *tab, int argc);
int						is_sort(int *tab, int max);
void					print_debug(t_ps *stack);
int						find_min(int *a, int max);
int						get_dist(int nb, int *a, int max);
void					push_min(t_ps *stack);
void					resolve_stack(t_ps *stack);
void					spec_case(t_ps *stack);
#endif
