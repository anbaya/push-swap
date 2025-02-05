#include "push_swap.h"

int stack_free(t_data *data)
{
    if (!data)
        return (0);
    t_stack *current;
    t_stack *next;

    current = data->stack;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    if (data->tab)
        free(data->tab);
    free(data);
    return (0);
}