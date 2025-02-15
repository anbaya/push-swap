#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc((sizeof(char) * i) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
int free_args(char **args)
{
    if (!args) 
		return (0);
	int i;
	
	i = 0;
    while (args[i])
	{
        free(args[i]);
		i++;
    }
    free(args);
	return (0);
}