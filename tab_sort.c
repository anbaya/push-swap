#include "push_swap.h"

int *tab_sort(t_stack *stack, t_data *data)
{
    int i;
    int tmp;
    int *tab;
    t_stack *head;

    i = 0;
    head = stack;
    tab = malloc(sizeof (int) * data->size);
    while (head)
    {
        tab[i] = head->num;
        i++;
        head = head->next;
    }
    i = 0;
    while (tab[i])
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        i++;
    }
    return (tab);
}