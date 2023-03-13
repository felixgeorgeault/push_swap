/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:01:48 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/13 18:42:42 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../include/libft/libft.h"
# include <stdio.h> // get rid of that shit !!!
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/**************************************************************/
/*********************      STRUCTS    ************************/
/**************************************************************/

typedef struct s_global
{
	int		argc;
	char	**argv;
}	t_global;

/**************************************************************/
/*********************      FUNCTIONS     *********************/
/**************************************************************/

// PARSING.C
void		ft_check_arg(t_global *g);

// LIBFT_UTILS.C
int			ft_is_number(char *str, t_global *g);
long int	ft_long_atoi(char *str);
char		*ft_getsign_long(char *str, int *is_neg);

// UTILS.C
void		ft_error(t_global *g);
void		ft_init_struct(int argc, char **argv, t_global *g);
#endif