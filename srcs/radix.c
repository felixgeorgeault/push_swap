/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:44:38 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/15 19:40:27 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix(t_global *g)
{
	int		i;
	int		j;
	int		sorted;
	t_stack	**a;

	i = 0;
	a = &g->a;
	sorted = 0;
	while (!sorted)
	{
		while (i < ft_lstsize_stack(a))
		{
			if (!((*a)->index >> i & 1))
				ft_pb(&g->a, &g->b);
			else
				ft_ra(&g->a);
			i++;
		}
		j = 0;
		while (j < ft_lstsize_stack(&g->b))
		{
			ft_pa(&g->a, &g->b);
		}
		sorted = ft_check_sort(g);
	}
}
