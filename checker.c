#include "checker.h"

void	checker()
{}

int	main(int ac, char **av)
{
	char	*s;
	char	**moves;
	int	i;
	int	*a;

	i = 0;
	if (ac > 1)
	{
		while (1)
		{
			while (av[i] != '\n')
			{//in join all we should put \n instead of \0 in while
				join_all_args();
				sz.a_len = check_valid_args();
				tmp = ft_calloc(sz.a_len, sizeof(int));
				fill_tmp(a, tmp, sz.a_len);
				bubble_sort(&tmp, sz.a_len);
				i += sz.a_len - 1;
	
			}

			s = get_next_line(0);
			if (s == '\0')
				break;
			(*move)[i] = s;
			i++;
		}
	}
}

