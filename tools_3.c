#include "push_swap.h"

t_stack *get_last(t_stack *stack)
{
    if (!stack)
        return NULL;
    while (stack->next)
        stack = stack->next;
    return stack;
}
int is_it_here(int num, int *tab, int min, int max)
{
    int i;

    i = min;
    while (i <= max)
    {
        if (tab[i] == num)
            return (1);
        i++;
    }
    return (0);
}
int get_index(int num, int *tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (num == tab[i])
            return i;
    }
}