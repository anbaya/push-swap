/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:05:00 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/15 18:19:45 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
