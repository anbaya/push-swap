/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:00:19 by anbaya            #+#    #+#             */
/*   Updated: 2025/02/18 00:16:30 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	count_size(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

t_data	*stack_init(void)
{
	t_data	*stack;

	stack = malloc(sizeof(t_data));
	if (!stack)
		return (NULL);
	stack->stack = NULL;
	stack->range = 0;
	stack->tab = 0;
	stack->min = 0;
	stack->max = 0;
	return (stack);
}

int	input_to_stack(char **av, int ac, t_data **data)
{
	t_stack	*tmp;
	int		i;

	i = 1;
	(*data)->stack = malloc(sizeof(t_stack));
	if (!(*data)->stack)
		return (0);
	(*data)->stack->num = ft_atoi(av[0]);
	(*data)->stack->next = NULL;
	tmp = (*data)->stack;
	while (av[i])
	{
		tmp->next = malloc(sizeof(t_stack));
		if (!tmp->next)
			return (0);
		tmp = tmp->next;
		tmp->num = ft_atoi(av[i]);
		tmp->next = NULL;
		i++;
	}
	(*data)->size = count_size(av);
	get_arr((*data)->stack, data);
	return (0);
}

char	**args_filter(char **argv)
{
	int		i;
	char	*tmp;
	char	*str;
	char	**args;

	if (!argv[0] || !argv[0][0])
	{
		write (2, "Error\n", 7);
		return (NULL);
	}
	i = 0;
	str = ft_strdup(argv[i]);
	i++;
	while (argv[i])
	{
		tmp = ft_strjoin(str, argv[i]);
		free(str);
		if (!tmp || !argv[i][0])
			return (NULL);
		str = tmp;
		i++;
	}
	args = ft_split(str, ' ');
	free(str);
	return (args);
}

int	main(int argc, char **argv)
{
	t_data	*a;
	t_data	*b;
	char	**args;

	if (argc < 3)
		return (0);
	a = stack_init();
	b = stack_init();
	if (!a || !b)
		return (0);
	args = args_filter(argv + 1);
	if (args == NULL)
		return (1);
	input_to_stack(args, argc - 1, &a);
	if (!checker(a, args) || !is_int(args))
	{
		write(2, "Error\n", 6);
		clean_exit(a, b, args);
		exit(1);
	}
	check(a, b, args);
	clean_exit(a, b, args);
	return (0);
}
