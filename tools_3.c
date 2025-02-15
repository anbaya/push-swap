/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:14:16 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/15 18:15:00 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int	is_it_here(int num, int *tab, int min, int max)
{
	int	i;

	i = min;
	while (i < max)
	{
		if (tab[i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	get_index(int num, int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (num == tab[i])
			return (i);
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * size + 2);
	if (!str)
		return (NULL);
	while (s1[j])
		str[i++] = s1[j++];
	j = 0;
	str[i++] = ' ';
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
