/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:28:18 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/16 13:53:19 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*first;

	if (!a || !b || !*b)
	{
		return ;
	}
	first = *b;
	*b = (*b)->next;
	if (*a)
		first->next = *a;
	else
		first->next = NULL;
	*a = first;
	ft_printf("pa\n");
}

void	ft_pb(t_stack **a, t_stack **b)
{
	t_stack	*first;

	if (!a || !b || !*a)
		return ;
	first = *a;
	*a = (*a)->next;
	if (*b)
		first->next = *b;
	else
		first->next = NULL;
	*b = first;
	ft_printf("pb\n");
}

void	ft_ra(t_stack **a)
{
	ft_ro(a);
	ft_printf("ra\n");
}
