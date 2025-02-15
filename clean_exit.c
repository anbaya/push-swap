#include "push_swap.h"

void clean_exit(t_data *a, t_data *b, char **args)
{
    free_args(args);
    stack_free(a);
    stack_free(b);
}