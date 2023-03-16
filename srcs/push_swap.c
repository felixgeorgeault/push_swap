/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/16 13:50:13 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_global	g;

	if (argc < 2)
		return (0);
	g.a = NULL;
	g.b = NULL;
	ft_init_struct(argc, argv, &g);
	ft_check_arg(&g);
	ft_init_stack(&g);
	ft_fill_index(&g);
	ft_radix(&g, 0);
	ft_check_sort(&g);
	ft_lstclear_stack(&g.a);
	ft_lstclear_stack(&g.b);
	free(g.argv);
	return (0);
}
