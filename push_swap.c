#include "push_swap.h"

int is_sorted(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack;
    while (tmp->next)
    {
        if (tmp->num > tmp->next->num)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}
int stack_size(t_stack *stack)
{
    int size;
    t_stack *tmp;

    size = 0;
    tmp = stack;
    while (tmp)
    {
        size++;
        tmp = tmp->next;
    }
    return (size);
}
t_stack *stack_init(int argc, char **argv, t_data **data)
{
    t_stack *stack;
    t_stack *tmp;
    int i;

    stack = malloc(sizeof(t_stack));
    *data = malloc (sizeof(t_data));
    if (!stack || !(*data))
        return (NULL);
    stack->num = ft_atoi(argv[0]);
    (*data)->size = argc;
    stack->next = NULL;
    tmp = stack;
    i = 1;
    while (i < argc)
    {
        tmp->next = malloc(sizeof(t_stack));
        if (!tmp->next)
            return (NULL);
        tmp = tmp->next;
        tmp->num = ft_atoi(argv[i]);
        tmp->next = NULL;
        i++;
    }
    (*data)->tab = tab_sort(stack, *data);
    return (stack);
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
int main(int argc, char **argv)
{
    t_stack *a;
    t_stack *b;
    t_data *data;

    if (argc < 2)
        return (0);
    a = stack_init(argc - 1, argv + 1, &data);
    b = stack_b_init(b, argc - 1);
    if (!a || !b)
        return (0);
    if (is_sorted(a))
    {
        stack_free(a);
        exit (0);
    }
    else if (data->size == 2)
        sa (&a);
    else if (data->size == 3)
        sort_three (&a);
    else if (data->size == 4)
        sort_four (&a, &b, data);
    else if (data->size == 5)
        sort_five (&a, &b, data);
    else
        sort_chunks (&a, &b, data);
    print_stack(a);
    stack_free(a);
    stack_free(b);
    return (0);
}