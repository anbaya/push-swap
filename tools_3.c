#include "push_swap.h"

t_stack *get_last(t_stack *stack)
{
    if (!stack)
        return NULL;
    while (stack->next)
        stack = stack->next;
    return stack;
}
