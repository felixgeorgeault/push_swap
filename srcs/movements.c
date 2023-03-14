/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:28:18 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/14 20:10:21 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_global *g)
{
	ft_sw(g->a);
	ft_printf("sa\n");
}

void	ft_sb(t_global *g)
{
	ft_sw(g->b);
	ft_printf("sb\n");
}

void	ft_ss(t_global *g)
{
	ft_sa(g);
	ft_sb(g);
}

void	ft_ra(t_global *g)
{
	ft_ro(g->a);
	ft_printf("ra\n");
}

void	ft_rb(t_global *g)
{
	ft_ro(g->b);
	ft_printf("rb\n");
}
