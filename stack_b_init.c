#include "push_swap.h"

t_stack *stack_b_init(t_stack *b, int argc)
{
    t_stack *stack;
    t_stack *tmp;
    int i;

    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    stack->num = ft_atoi("0");
    stack->next = NULL;
    tmp = stack;
    i = 1;
    while (i < argc)
    {
        tmp->next = malloc(sizeof(t_stack));
        if (!tmp->next)
            return (NULL);
        tmp = tmp->next;
        tmp->num = ft_atoi("0");
        tmp->next = NULL;
        i++;
    }
    return (stack);
}