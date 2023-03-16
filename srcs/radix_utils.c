/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:44:15 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/16 19:57:43 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_index(t_stack **a, int len)
{
	t_stack	*first;
	int		i;
	int		nbr;
	int		index;

	first = *a;
	i = 0;
	index = 1;
	nbr = (*a)->number;
	while (i <= len)
	{
		nbr = (*a)->number;
		*a = (*a)->next;
		i++;
	}
	*a = first;
	while (*a)
	{
		if ((*a)->number < nbr)
		index++;
		*a = (*a)->next;
	}
	*a = first;
	return (index);
}

static void	ft_put_index(t_stack **a, int pos, int index)
{
	t_stack	*first;
	int		i;

	first = *a;
	i = 0;
	while (i < pos)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->index = index;
	*a = first;
}

void	ft_fill_index(t_global *g)
{
	int		i;
	int		index_value;

	i = 0;
	while (i < ft_lstsize_stack(&g->a))
	{
		index_value = ft_check_index(&g->a, i);
		ft_put_index(&g->a, i, index_value);
		i++;
	}
}

int	ft_check_sort(t_global *g)
{
	t_stack	*first;
	t_stack	**a;
	int		tmp;

	a = &g->a;
	first = *a;
	tmp = (*a)->number;
	while (*a)
	{
		if ((*a)->number < tmp)
		{
			*a = first;
			return (0);
		}
		tmp = (*a)->number;
		*a = (*a)->next;
	}
	*a = first;
	return (1);
}
