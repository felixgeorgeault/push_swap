//////// DEBUUG FILE TO DELETE LATER
#include "push_swap.h"

void	ft_print_stack(t_stack **stack, t_global *g)
{
	t_stack	*first;

	first = *stack;
	if (!stack)
		ft_error(g);
	if (!*stack)
	{
		printf("STACK IS EMPTY");
		return ;
	}
	while (*stack)
	{
		printf("[%d] | index: %d\n", (*stack)->number, (*stack)->index);
		*stack = (*stack)->next;
	}
	*stack = first;
}

void	ft_print_stacks(t_global *g)
{
	ft_printf("---------------------------\n");
	ft_printf("-----------AAAAAA----------\n");
	ft_print_stack(&g->a, g);
	ft_printf("-----------BBBBBB----------\n");
	ft_print_stack(&g->b, g);
	ft_printf("---------------------------\n");
}

static void	ft_testpa(t_global *g)
{
	int	i;

	i = 0;
	 while (ft_lstsize_stack(&g->b))
	{
		printf(">%d\n", ft_lstsize_stack(&g->b));
		ft_pa(&g->a, &g->b);
		i++;
	}
}

void	ft_fill_stack(t_global *g)
{
	int	i;
	int	j;

	i = 0;
	j = 10;
	while (i < j)
	{
		ft_lstadd_back_stack(&g->b, ft_lstnew_stack(i, g), g);
		i++;
	}
	ft_testpa(g);
}

