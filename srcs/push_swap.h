/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:01:48 by fgeorgea          #+#    #+#             */
/*   Updated: 2023/03/17 12:31:42 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../include/libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/**************************************************************/
/*********************      STRUCTS    ************************/
/**************************************************************/

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}		t_stack;

typedef struct s_global
{
	int		argc;
	char	**argv;
	t_stack	*a;
	t_stack	*b;
}	t_global;

/**************************************************************/
/*********************      FUNCTIONS     *********************/
/**************************************************************/

// PARSING.C
void		ft_check_arg(t_global *g);

// LIBFT_UTILS.C
int			ft_is_number(char *str, t_global *g);
long int	ft_long_atoi(char *str, t_global *g);
char		*ft_getsign_long(char *str, int *is_neg);

// UTILS.C
void		ft_error(t_global *g);
void		ft_init_struct(int argc, char **argv, t_global *g);

// STACK.C
void		ft_init_stack(t_global *g);

// LST_UTILS.C
t_stack		*ft_lstnew_stack(int number, t_global *g);
void		ft_lstadd_back_stack(t_stack **lst, t_stack *new, t_global *g);
int			ft_lstsize_stack(t_stack **lst);
void		ft_lstclear_stack(t_stack **stack);

// MOVEMENTS.C
void		ft_pa(t_stack **a, t_stack **b);
void		ft_pb(t_stack **a, t_stack **b);
void		ft_ra(t_stack **a);
void		ft_sa(t_stack **a);
void		ft_rra(t_stack **a);

// MOVEMENT_UTILS.C
void		ft_sw(t_stack **stack);
void		ft_ro(t_stack **stack);
void		ft_rro(t_stack **stack);

// RADIX_UTILS.C
void		ft_fill_index(t_global *g);
int			ft_check_sort(t_global *g);

// RADIX.C
void		ft_check_if_radix(t_global *g);

// LST_UTILS2.C
int			find_max_ind(t_stack **stack);
int			find_min_ind(t_stack **stack);
#endif