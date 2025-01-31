# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
    int	num;
    struct s_stack	*next;
}	t_stack;

typedef struct s_data
{
    int	size;
    int range;
    int min;
    int max;
    int *tab;
}   t_data;



int sa(t_stack **stack_a);
int sb(t_stack **stack_b);
int ss(t_stack **stack_a, t_stack **stack_b);
int pa(t_stack **stack_a, t_stack **stack_b);
int pb(t_stack **stack_a, t_stack **stack_b);
int ra(t_stack **stack_a);
int rb(t_stack **stack_b);
int rr(t_stack **stack_a, t_stack **stack_b);
int rra(t_stack **stack_a);
int rrb(t_stack **stack_b);
int rrr(t_stack **stack_a, t_stack **stack_b);
int is_sorted(t_stack *stack);
int stack_size(t_stack *stack);
t_stack *stack_init(int argc, char **argv, t_data **data);
int stack_free(t_stack *stack);
int ft_atoi(const char *str);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b, t_data *data);
void	sort_five(t_stack **a, t_stack **b, t_data *data);
void	push_max(t_stack **a, t_stack **b);
int     set_range(t_stack *stack, t_data *data);
void	sort_chunks(t_stack **a, t_stack **b, t_data *data);
void	ft_lstadd_front(t_stack **lst,t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void    ft_lstadd_one(t_stack *stack, int num);
t_stack	*ft_lstlast(t_stack *lst);
int	ft_lstsize(t_stack *lst);
int	ft_index(t_stack *stack, int num);
int *tab_sort(t_stack *stack, t_data *data);
void    ft_lstdelone(t_stack **stack);
t_stack *stack_b_init(t_stack *b, int argc);
t_stack *get_last(t_stack *stack);
int	ft_max(t_stack *stack);
int	ft_min(t_stack *stack);

# endif