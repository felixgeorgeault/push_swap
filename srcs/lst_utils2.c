/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:46:02 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/16 19:56:48 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_ind(t_stack **stack)
{
	t_stack	*first;
	int		res;
	int		i;
	int		tmp;

	first = *stack;
	tmp = (*stack)->number;
	i = 0;
	res = 0;
	while (*stack)
	{
		if ((*stack)->number < tmp)
		{
			tmp = (*stack)->number;
			res = i;
		}
		i++;
		*stack = (*stack)->next;
	}
	*stack = first;
	return (res);
}

int	find_max_ind(t_stack **stack)
{
	t_stack	*first;
	int		res;
	int		i;
	int		tmp;

	first = *stack;
	tmp = (*stack)->number;
	i = 0;
	res = 0;
	while (*stack)
	{
		if ((*stack)->number > tmp)
		{
			tmp = (*stack)->number;
			res = i;
		}
		i++;
		*stack = (*stack)->next;
	}
	*stack = first;
	return (res);
}
