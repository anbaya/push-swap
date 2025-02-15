/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:10:27 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/15 18:11:51 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	r;
	size_t	sign;
	char	*s;

	s = (char *)str;
	i = 0;
	r = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 8 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r *= 10;
		r += (s[i] - 48);
		i++;
	}
	return ((int)(r * sign));
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*p;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next)
		p = p->next;
	p->next = new;
}

void	ft_lstadd_one(t_stack *stack, int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->num = num;
	new->next = NULL;
	stack = new;
}

void	ft_lstdelone(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
