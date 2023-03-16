/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:44:38 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/16 13:52:56 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix(t_global *g, int byte_shift)
{
	int		i;
	t_stack	**a;

	a = &g->a;
	while (ft_check_sort(g) == 0)
	{
		i = ft_lstsize_stack(a);
		while (i)
		{
			if ((((*a)->index >> byte_shift) & 1) == 0)
				ft_pb(&g->a, &g->b);
			else
				ft_ra(&g->a);
			i--;
		}
		byte_shift++;
		while (ft_lstsize_stack(&g->b))
			ft_pa(&g->a, &g->b);
	}
}
