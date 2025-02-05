#include "push_swap.h"

int is_sorted(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack;
    while (tmp->next)
    {
        if (tmp->num > tmp->next->num)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

int	is_int(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	is_dup(t_data *stack)
{
	int	i;
	int	j;
	int	size;

	size = stack->size;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack->tab[i] == stack->tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}