/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:53:27 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/14 19:04:09 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_global *g)
{
	write(1, "Error\n", 6);
	if (g->argv)
		free(g->argv);
	if (g->a)
	exit(EXIT_FAILURE);
}

void	ft_init_struct(int argc, char **argv, t_global *g)
{
	int	i;

	i = 1;
	g->argc = argc - 1;
	if (argc == 2)
	{
		g->argv = ft_split(argv[1], ' ');
		i = 0;
		while (g->argv[i])
			i++;
		g->argc = i;
	}
	else
	{
		i = 1;
		g->argv = malloc(sizeof(char *) * (g->argc + 1));
		if (!g->argv)
			ft_error(g);
		while (argv[i])
		{
			g->argv[i - 1] = argv[i];
			i++;
		}
		g->argv[i - 1] = NULL;
	}

	// i = 0;
	// while (g->argv[i])
	// {
	// 	ft_printf("%s\n", g->argv[i]);
	// 	i++;
	// }
	// ft_printf("argc: %d\n", g->argc);
}
