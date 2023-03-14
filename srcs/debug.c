//////// DEBUUG FILE TO DELETE LATER
#include "push_swap.h"

void	ft_print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return ;
	while (stack->next)
	{
		printf("[%d]\n", stack->number);
		stack = stack->next;
		i++;
	}
	if (i == 0)
		printf("STACK IS EMPTY");
	else
		printf("[%d]\n", stack->number);
}