#include "push_swap_bonus.h"
#include "get_next_line_bonus.h"

int cmp(char *line, t_data *a, t_data *b, char **args)
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
		return (perror ("error"), clean_exit (a, b, args), 0);
}

int check(t_data *a, t_data *b, char **args)
{
    char *line;
    
    while (1)
    {
        get_next_line(2);
        if (!line)
            break;
        cmp(line, a, b, args);
        free (line);
    }
    if (is_sorted(a->stack) && !b->stack)
    {
        clean_exit(a, b, args);
        write (1, "OK\n", 3);
        exit (0);
    }
    else
    {
        clean_exit (a, b, args);
        write (1, "KO\n", 3);
        exit (0);
    }
}