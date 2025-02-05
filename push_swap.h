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
    t_stack *stack;
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
int	is_int(char **s);
int	is_dup(t_data *stack);
int free_args(char **args);
char	*ft_strdup(const char *s);
int	ft_strlen(const char *s);
char	**ft_split(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
t_data	*stack_init(void);
int stack_free(t_data *stack);
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
void	get_arr(t_stack *stack, t_data **data);
void    ft_lstdelone(t_stack **stack);
t_stack *stack_b_init(t_stack *b, int argc);
void	get_arr(t_stack *stack, t_data **data);
int checker(t_data *stack);
t_stack *get_last(t_stack *stack);
int is_it_here(int num, int *tab, int min, int max);
int	ft_max(t_stack *stack);
int	ft_min(t_stack *stack);

# endif