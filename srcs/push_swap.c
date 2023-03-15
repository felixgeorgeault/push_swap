/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:07 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/15 15:44:54 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_global	g;

	if (argc < 2)
		return (0);
	ft_init_struct(argc, argv, &g);
	ft_check_arg(&g);
	ft_init_stack(&g);
	ft_fill_index(&g);
	return (0);
}
