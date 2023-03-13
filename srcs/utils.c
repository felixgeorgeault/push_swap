/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:53:27 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/13 18:24:12 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_global *g)
{
	write(1, "Error\n", 6);
	if (ft_strncmp(g->argv[0], "./push_swap", 11) != 0)
		free(g->argv);
	exit(EXIT_FAILURE);
}

void	ft_init_struct(int argc, char **argv, t_global *g)
{
	g->argc = argc;
	if (argc == 2)
	{
		g->argv = ft_split(argv[1], ' ');
		g->argv_add = 0;
	}
	else
	{
		g->argv = argv;
		g->argv_add = 1;
	}
}
