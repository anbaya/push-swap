#include "push_swap.h"

void	push_max(t_stack **a, t_stack **b)
{
	int	index;
	int	size;

	size = ft_lstsize((*b)->next);
	index = ft_index(*b, ft_max(*b));
	if (index <= size / 2)
		while ((*b)->next->num != ft_max(*b))
			rb(b);
	else
		while ((*b)->next->num != ft_max(*b))
			rrb(b);
	pa(a, b);
}

int	set_range(t_stack *stack, t_data *data)
{
	int	range;

	if (data->size <= 16)
		range = 5;
	else if (data->size <= 100)
		range = 15;
	else
		range = 40;
	return (range);
}

void	sort_chunks(t_stack **a, t_stack **b, t_data *data)
{
	data->range = set_range(*a, data);
	data->size = ft_lstsize(*a);
	while (*a)
	{
		if ((*a)->num >= data->tab[data->min]
			&& (*a)->num <= data->tab[data->range])
		{
			pb(a, b);
			if (data->range < data->size - 1)
				data->range++;
			data->min++;
		}
		else if ((*a)->num < data->tab[data->min])
		{
			pb(a, b);
			rb(b);
			if (data->range < data->size - 1)
				data->range++;
			data->min++;
		}
		else
			ra(a);
	}
	while ((*b)->next)
		push_max(a, b);
}

