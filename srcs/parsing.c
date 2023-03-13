/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:20:10 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/13 16:16:28 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_check_nbr_limit(t_global *g)
{
	int	i;

	i = 0;
	while (i < g->argc)
	{
		if (ft_long_atoi(g->argv[i]) > INT_MAX
			|| ft_long_atoi(g->argv[i]) < INT_MIN)
		{
			printf("ABOVE OR UNDER LIMIT");
			ft_error();
		}
		i++;
	}
}

static void	ft_check_double(t_global *g)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	while (i < g->argc - 1)
	{
		if (ft_atoi(g->argv[i]) == ft_atoi(g->argv[j]))
		{
			printf("%d: %d\n", i, ft_atoi(g->argv[i]));
			printf("%d: %d\n", j, ft_atoi(g->argv[j]));
			printf("Double number");
			ft_error();
		}
		j++;
		if (j == g->argc)
		{
			i++;
			j = i + 1;
		}
	}
}

static void	ft_check_type(t_global *g)
{
	int	i;

	i = 1;
	while (i < g->argc)
	{
		if (!ft_is_number(g->argv[i]))
		{
			printf("not a number");
			ft_error();
		}	
		i++;
	}
}

void	ft_check_arg(int argc, char **argv, t_global *g)
{
	g->argc = argc;
	g->argv = argv;
	ft_check_type(g);
	ft_check_nbr_limit(g);
	ft_check_double(g);
}
