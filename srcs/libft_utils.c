/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:54:34 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/13 18:40:39 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_number(char *str, t_global *g)
{
	int	i;

	i = 0;
	if (!str)
		ft_error(g);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= '\t' && c <= '\r'))
		return (1);
	return (0);
}

char	*ft_getsign_long(char *str, int *is_neg)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_neg *= -1;
		str++;
	}
	return (str);
}

long int	ft_long_atoi(char *str)
{
	int			is_neg;
	long int	nbr;
	long int	tmp;

	is_neg = 1;
	if (!str)
		return (0);
	is_neg = 1;
	nbr = 0;
	tmp = 0;
	while (ft_isspace(*str))
		str++;
	str = ft_getsign_long(str, &is_neg);
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - 48;
		if (nbr < tmp && is_neg == 1)
			return (-1);
		if (nbr < tmp && is_neg == -1)
			return (0);
		tmp = nbr;
		str++;
	}
	return ((nbr * is_neg));
}
