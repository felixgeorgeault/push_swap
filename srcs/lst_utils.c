/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:42:47 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/15 19:47:43 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_lstlast_stack(t_stack *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_lstnew_stack(int number, t_global *g)
{
	t_stack	*list;

	list = malloc(sizeof(t_stack));
	if (!list)
		ft_error(g);
	list->number = number;
	list->index = -1;
	list->next = NULL;
	return (list);
}

void	ft_lstadd_back_stack(t_stack **lst, t_stack *new, t_global *g)
{
	t_stack	*last;

	if (!new || !lst)
		ft_error(g);
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		last = ft_lstlast_stack(*lst);
		last->next = new;
	}
}

int	ft_lstsize_stack(t_stack **lst)
{
	size_t	i;
	t_stack	*first;

	i = 1;
	first = *lst;
	if (!lst || !*lst)
		return (0);
	while ((*lst)->next)
	{
		*lst = (*lst)->next;
		++i;
	}
	*lst = first;
	return (i);
}

void	ft_lstclear_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}
