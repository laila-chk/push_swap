

#include "push_swap.h"

void	join_all_args(char **joined_args, char **v, int c)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (v[1][j] != '\0')
	{
		*joined_args[j] = v[1][j];
		j++;
	}
	*joined_args[j] = ' ';
	*joined_args[j + 1] = '\0';
	printf("%s", *joined_args);
	while (i < c)
	{
		*joined_args = ft_strjoin(*joined_args, v[i]);
		i++;
	}
}
