#include "push_swap.h"

int sa(t_stack **stack_a)
{
    if (!*stack_a || !(*stack_a)->next)
        return (0);
    int tmp = (*stack_a)->num;
    (*stack_a)->num = (*stack_a)->next->num;
    (*stack_a)->next->num = tmp;
    return (0);
}

int sb(t_stack **stack_b)
{
    if (!*stack_b || !(*stack_b)->next)
        return (0);
    int tmp = (*stack_b)->num;
    (*stack_b)->num = (*stack_b)->next->num;
    (*stack_b)->next->num = tmp;
    return (0);
}

int ss(t_stack **stack_a, t_stack **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    return (0);
}

int pa(t_stack **stack_a, t_stack **stack_b)
{
    if (!*stack_b)
        return (0);
    t_stack *tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    ft_lstadd_front(stack_a, tmp);
    return (0);
}

int pb(t_stack **stack_a, t_stack **stack_b)
{
    if (!*stack_a)
        return (0);
    t_stack *tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    ft_lstadd_front(stack_b, tmp);
    return (0);
}

int ra(t_stack **stack_a)
{
    if (!*stack_a || !(*stack_a)->next)
        return (0);
    
    t_stack *tmp = *stack_a;
    *stack_a = tmp->next;
    tmp->next = NULL;
    
    t_stack *last = get_last(*stack_a);
    last->next = tmp;
    return (0);
}

int rb(t_stack **stack_b)
{
    if (!*stack_b || !(*stack_b)->next)
        return (0);
    
    t_stack *tmp = *stack_b;
    *stack_b = tmp->next;
    tmp->next = NULL;
    
    t_stack *last = get_last(*stack_b);
    last->next = tmp;
    return (0);
}

int rr(t_stack **stack_a, t_stack **stack_b)
{
    ra(stack_a);
    rb(stack_b);
    return (0);
}

int rra(t_stack **stack_a)
{
    if (!*stack_a || !(*stack_a)->next)
        return (0);
    
    t_stack *tmp = *stack_a;
    while (tmp->next->next) 
        tmp = tmp->next;
    
    t_stack *last = tmp->next;  
    tmp->next = NULL;
    ft_lstadd_front(stack_a, last);
    return (0);
}

int rrb(t_stack **stack_b)
{
    if (!*stack_b || !(*stack_b)->next)
        return (0);
    
    t_stack *tmp = *stack_b;
    while (tmp->next->next) 
        tmp = tmp->next;
    
    t_stack *last = tmp->next;  
    tmp->next = NULL;
    ft_lstadd_front(stack_b, last);
    return (0);
}

int rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
    return (0);
}