/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movments_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:54:22 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/15 17:59:21 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sb(t_stack **stack_b)
{
	int	tmp;

	if (!*stack_b || !(*stack_b)->next)
		return (0);
	tmp = (*stack_b)->num;
	(*stack_b)->num = (*stack_b)->next->num;
	(*stack_b)->next->num = tmp;
	write(1, "sb\n", 3);
	return (0);
}

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!*stack_a)
		return (0);
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, tmp);
	write(1, "pb\n", 3);
	return (0);
}

int	rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack_b || !(*stack_b)->next)
		return (0);
	tmp = *stack_b;
	*stack_b = tmp->next;
	tmp->next = NULL;
	last = get_last(*stack_b);
	last->next = tmp;
	write(1, "rb\n", 3);
	return (0);
}

int	rrb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack_b || !(*stack_b)->next)
		return (0);
	tmp = *stack_b;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stack_b, last);
	write(1, "rrb\n", 4);
	return (0);
}
