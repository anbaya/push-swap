#include "push_swap.h"

int sa(t_stack **stack_a)
{
    int tmp;

    tmp = (*stack_a)->num;
    (*stack_a)->num = (*stack_a)->next->num;
    (*stack_a)->next->num = tmp;
    return (0);
}

int sb(t_stack **stack_b)
{
    int tmp;

    tmp = (*stack_b)->num;
    (*stack_b)->num = (*stack_b)->next->num;
    (*stack_b)->next->num = tmp;
    return (0);
}
int ss(t_stack **stack_a, t_stack **stack_b)
{
    int tmp_a;
    int tmp_b;

    tmp_a = (*stack_a)->num;
    (*stack_a)->num = (*stack_a)->next->num;
    (*stack_a)->next->num = tmp_a;
    tmp_b = (*stack_b)->num;
    (*stack_b)->num = (*stack_b)->next->num;
    (*stack_b)->next->num = tmp_b;
    return (0);
}
int pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = NULL;
    ft_lstadd_front(stack_a, tmp);
    return (0);
}
int pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = NULL;
    ft_lstadd_front(stack_b, tmp);
    return (0);
}

int ra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *last;

    tmp = *stack_a;
    *stack_a = tmp->next;
    tmp->next = NULL;       
    last = *stack_a;
    while (last->next)
        last = last->next;
    last->next = tmp;
    return (0);
}

int rb(t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *last;

    tmp = *stack_b;
    *stack_b = tmp->next;
    tmp->next = NULL;       
    last = *stack_b;
    while (last->next)
        last = last->next;
    last->next = tmp;
    return (0);
}
int rr(t_stack **stack_a, t_stack **stack_b)
{
    ra (stack_a);
    rb (stack_b);
    return (0);
}
int rra(t_stack **stack_a)
{
    t_stack *tmp;
    t_stack *prev;

    tmp = *stack_a;
    while (tmp->next->next) // Find second-to-last node
        tmp = tmp->next;
    prev = tmp;          // Store second-to-last node
    tmp = tmp->next;     // Get last node
    prev->next = NULL;   // Remove last node from its position
    ft_lstadd_front(stack_a, tmp); // Move last node to the front
    return (0);
}

int rrb(t_stack **stack_b)
{
    t_stack *tmp;
    t_stack *prev;

    tmp = *stack_b;
    while (tmp->next->next) // Find second-to-last node
        tmp = tmp->next;
    prev = tmp;          // Store second-to-last node
    tmp = tmp->next;     // Get last node
    prev->next = NULL;   // Remove last node from its position
    ft_lstadd_front(stack_b, tmp); // Move last node to the front
    return (0);
}
int rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra (stack_a);
    rrb (stack_b);
    return (0);
}