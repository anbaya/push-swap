#include "push_swap.h"

void	ft_easy_sort(t_stack **stack, t_data **data)
{
	int	i;
	int	j;
	int	tmp;
	int	size;

	i = 0;
	size = ft_lstsize(*stack);
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if ((*data)->tab[j] > (*data)->tab[j + 1])
			{
				tmp = (*data)->tab[j];
				(*data)->tab[j] = (*data)->tab[j + 1];
				(*data)->tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	get_arr(t_stack *stack, t_data **data)
{
	int		i;
	int		size;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	size = ft_lstsize(stack);
	(*data)->tab = malloc(size * sizeof(int));
	if (!(*data)->tab)
		return ;
	while (tmp)
	{
		(*data)->tab[i] = tmp->num;
		tmp = tmp->next;
		i++;
	}
	ft_easy_sort(&stack, data);
}