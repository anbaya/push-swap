/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:42:07 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/15 17:43:01 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	stack_free(t_data *data)
{
	t_stack	*current;
	t_stack	*next;

	if (!data)
		return (0);
	current = data->stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	if (data->tab)
		free(data->tab);
	free(data);
	return (0);
}
