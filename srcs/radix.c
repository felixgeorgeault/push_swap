/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:44:38 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/15 20:32:24 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix(t_global *g, int byte_shift)
{
	int		i;
	int		j;
	t_stack	**a;

	a = &g->a;
	while (ft_check_sort(g) == 0)
	{
		i = 0;
		while (i < ft_lstsize_stack(a))
		{
			if (((*a)->index >> byte_shift & 1) == 0)
				ft_pb(&g->a, &g->b);
			else
				ft_ra(&g->a);
			i++;
		}
		byte_shift++;
		j = 0;
		while (j < ft_lstsize_stack(&g->b))
		{
			ft_pa(&g->a, &g->b);
			j++;
		}
	}
}
