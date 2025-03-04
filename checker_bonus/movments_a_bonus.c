/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movments_a_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:53:08 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/18 00:18:00 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	sa(t_stack **stack_a)
{
	int	tmp;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	tmp = (*stack_a)->num;
	(*stack_a)->num = (*stack_a)->next->num;
	(*stack_a)->next->num = tmp;
	return (0);
}

int	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_b)
		return (0);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, tmp);
	return (0);
}

int	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = NULL;
	last = get_last(*stack_a);
	last->next = tmp;
	return (0);
}

int	rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack_a || !(*stack_a)->next)
		return (0);
	tmp = *stack_a;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_a, last);
	return (0);
}
