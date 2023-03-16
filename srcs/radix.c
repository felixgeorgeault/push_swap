/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:44:38 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/16 19:57:29 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_radix(t_global *g, int byte_shift)
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

static void	ft_tri_sort(t_global *g)
{
	int	min;
	int	max;

	min = find_min_ind(&g->a);
	max = find_max_ind(&g->a);
	if (min == 0 && max == 1)
	{
		ft_sa(&g->a);
		ft_ra(&g->a);
	}
	else if (min == 1 && max == 2)
		ft_sa(&g->a);
	else if (min == 2 && max == 0)
	{
		ft_sa(&g->a);
		ft_rra(&g->a);
	}
	else if (min == 1 && max == 0)
		ft_ra(&g->a);
	else
		ft_rra(&g->a);
}

static void	ft_five_sort(t_global *g)
{
	while (ft_lstsize_stack(&g->a) > 3)
	{
		if (find_min_ind(&g->a) == 0)
			ft_pb(&g->a, &g->b);
		else if (find_min_ind(&g->a) == (ft_lstsize_stack(&g->a) - 1))
		{
			ft_rra(&g->a);
		}
		else
			ft_ra(&g->a);
	}
	if (!ft_check_sort(g))
		ft_tri_sort(g);
	while (ft_lstsize_stack(&g->b))
		ft_pa(&g->a, &g->b);
}

void	ft_check_if_radix(t_global *g)
{
	if (ft_check_sort(g))
		return ;
	if (ft_lstsize_stack(&g->a) == 3)
		ft_tri_sort(g);
	else if (ft_lstsize_stack(&g->a) == 5)
		ft_five_sort(g);
	else
		ft_radix(g, 0);
}
