/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 23:46:31 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/17 23:50:43 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include "push_swap_bonus.h"

int	cmp(char *line, t_data *a, t_data *b, char **args)
{
	if (!ft_strncmp("sa", line, 2) && (line[2] == '\n'))
		sa(&a->stack);
	else if (!ft_strncmp("sb", line, 2) && (line[2] == '\n'))
		sb(&b->stack);
	else if (!ft_strncmp("pb", line, 2) && (line[2] == '\n'))
		pb(&a->stack, &b->stack);
	else if (!ft_strncmp("pa", line, 2) && (line[2] == '\n'))
		pa(&a->stack, &b->stack);
	else if (!ft_strncmp("ra", line, 2) && (line[2] == '\n'))
		ra(&a->stack);
	else if (!ft_strncmp("rb", line, 2) && (line[2] == '\n'))
		rb(&b->stack);
	else if (!ft_strncmp("rra", line, 3) && (line[3] == '\n'))
		rra(&a->stack);
	else if (!ft_strncmp("rrb", line, 3) && (line[3] == '\n'))
		rrb(&b->stack);
	else if (!ft_strncmp("ss", line, 2) && (line[2] == '\n'))
		ss(&a->stack, &b->stack);
	else if (!ft_strncmp("rr", line, 2) && (line[2] == '\n'))
		rr(&a->stack, &b->stack);
	else if (!ft_strncmp("rrr", line, 3) && (line[3] == '\n'))
		rrr(&a->stack, &b->stack);
	else
		return (perror("error"), free(get_next_line(0)), -1);
}

int	check(t_data *a, t_data *b, char **args)
{
	char	*line;
	int		i;

	i = 0;
	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		i = cmp(line, a, b, args);
		if (i == -1)
		{
			clean_exit(a, b, args);
			free(line);
			exit(1);
		}
		free(line);
	}
	if (is_sorted(a->stack) && !b->stack)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	clean_exit(a, b, args);
	exit(0);
}
