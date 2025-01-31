#include "push_swap.h"

int *copy_stack_to_array(t_stack *stack, int size)
{
    int *tab;
    int i = 0;
    t_stack *head = stack;

    tab = malloc(sizeof(int) * size);
    if (!tab)
        return (NULL);
    while (i < size)
    {
        tab[i] = head->num;
        head = head->next;
        i++;
    }
    return (tab);
}

// Function to sort the array using Bubble Sort
void bubble_sort(int *tab, int size)
{
    int i, j, tmp;
    int swapped;

    i = 0;
    while (i < size - 1)
    {
        swapped = 0;
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
                swapped = 1;
            }
            j++;
        }
        if (!swapped) // Exit early if sorted
            break;
        i++;
    }
}

// Main function that calls both
int *tab_sort(t_stack *stack, t_data *data)
{
    if (!stack || data->size <= 0)
        return (NULL);

    int *tab = copy_stack_to_array(stack, data->size);
    if (!tab)
        return (NULL); // Handle malloc failure

    bubble_sort(tab, data->size);
    return (tab);
}