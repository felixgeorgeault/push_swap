/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:52:16 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/14 20:09:10 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sw(t_stack *stack)
{
	int	i;
	int	tmp;
	
	i = ft_lstsize_stack(stack);
	if (i <= 1)
		return ;
	tmp = stack->number;
	stack->number = stack->next->number;
	stack->next->number = tmp;
}

void	ft_ro(t_stack *stack)
{
	int	i;
	int	tmp;
	
	i = ft_lstsize_stack(stack);
	tmp = 0;
	if (i <= 2)
		ft_sw(stack);
	while (stack->next)
	{
		tmp = stack->next->number;
		stack->next->number = stack->number;
		stack->number = tmp;
		stack = stack->next;
	}
}