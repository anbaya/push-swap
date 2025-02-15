/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:18:54 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/15 18:19:03 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sort(t_data *a, t_data *b)
{
	if (a->size == 2)
		sa(&a->stack);
	else if (a->size == 3)
		sort_three(&a->stack);
	else if (a->size == 4)
		sort_four(&a->stack, &b->stack, a);
	else if (a->size == 5)
		sort_five(&a->stack, &b->stack, a);
	else
		sort_chunks(&a->stack, &b->stack, a);
}
