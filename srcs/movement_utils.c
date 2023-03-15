/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:52:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/15 19:48:14 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sw(t_stack **stack)
{
	int		i;
	int		tmp;
	t_stack	*first;

	if (!stack || !*stack)
		return ;
	first = *stack;
	i = ft_lstsize_stack(stack);
	if (i <= 1)
		return ;
	tmp = (*stack)->number;
	(*stack)->number = (*stack)->next->number;
	(*stack)->next->number = tmp;
	*stack = first;
}

void	ft_ro_old(t_stack **stack)
{
	int		i;
	int		tmp;
	t_stack	*first;

	if (!stack || !*stack)
		return ;
	first = *stack;
	i = ft_lstsize_stack(stack);
	tmp = 0;
	if (i <= 2)
	{
		ft_sw(stack);
		return ;
	}	
	while (*stack)
	{
		tmp = (*stack)->next->number;
		(*stack)->next->number = (*stack)->number;
		(*stack)->number = tmp;
		*stack = (*stack)->next;
	}
	*stack = first;
}

void	ft_ro(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

	last = NULL;
	if (stack && *stack)
	{
		first = *stack;
		second = first->next;
		while ((*stack)->next)
			*stack = (*stack)->next;
		last = *stack;
		last->next = first;
		*stack = second;
		first->next = NULL;
	}
}
