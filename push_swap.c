#include "push_swap.h"

t_data	*stack_init(void)
{
	t_data*stack;

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
int input_to_stack(char **av, int ac, t_data **data)
{
    t_stack *tmp;
    int i;

    i = 2;
    (*data)->stack = malloc(sizeof(t_stack));
    if (!(*data)->stack)
        return (0);
    (*data)->stack->num = ft_atoi(av[1]);
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
    (*data)->size = ac;
    get_arr((*data)->stack, data);
    return (0);
}
void print_stack(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack;
    while (tmp)
    {
        printf("%d\n", tmp->num);
        tmp = tmp->next;
    }
}

char **args_filter(char **argv)
{
    int i;
    char *tmp;
    char *str;
    char **args;

    i = 0;
    str = ft_strdup (argv[i]);
    i++;
    while (argv[i])
    {
        tmp = ft_strjoin(str, argv[i]);
        free (str);
        str = ft_strdup(tmp);
        free (tmp);
        i++;
    }
    args = ft_split(str, ' ');
    free (str);
    return (args);
}

int main(int argc, char **argv)
{
    t_data *a;
    t_data *b;
    char **args;

    if (argc < 2 || !is_int(argv + 1))
        return (0);
    a = stack_init();
    b = stack_init();
    if (!a || !b)
        return (0);
    args = args_filter(argv + 1);
    input_to_stack (args, argc - 2, &a);
    if (!checker(a))
    {
        free_args(args);
        stack_free (a);
        stack_free (a);
    }
    printf("Array elements: ");
    for (int i = 0; i < a->size; i++) {
        printf("%d ", a->tab[i]);
}
    printf("\n"); // Optional: Add a newline for better formatting
    if (is_sorted(a->stack))
    {
        stack_free(a);
        exit (0);
    }
    else if (a->size == 2)
        sa (&a->stack);
    else if (a->size == 3)
        sort_three (&a->stack);
    else if (a->size == 4)
        sort_four (&a->stack, &b->stack, a);
    else if (a->size == 5)
        sort_five (&a->stack, &b->stack, a);
    else
        sort_chunks (&a->stack, &b->stack, a);
    print_stack(a->stack);
    free_args(args);
    stack_free(a);
    stack_free(b);
    return (0);
}