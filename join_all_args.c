/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_all_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:19:15 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 11:46:30 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_empty_arg(int i, int c, char **p, char **v)
{
	int	j;

	j = 0;
	if (i <= c && v[i][0] == '\0')
	{
		free(*p);
		write (2, "Error: empty argument!", 22);
		exit(EXIT_FAILURE);
	}
	else if (i <= c && (v[i][j] == 32 || (v[i][j] <= 13 && v[i][j] >= 9)))
	{
		while (v[i][j] == 32 || (v[i][j] <= 13 && v[i][j] >= 9))
		{
			j++;
			if (v[i][j] == '\0')
			{
				free(*p);
				write (2, "Error: argument holds only white spaces", 39);
				exit(EXIT_FAILURE);
			}
		}
	}
}

void	join_all_args(char **joined_args, char **v, int c)
{
	int		i;
	int		j;
	char	*p;

	i = 2;
	j = 0;
	*(joined_args) = ft_calloc(ft_strlen(v[1]), sizeof(char) + 2);
	check_empty_arg(1, c, joined_args, v);
	while (v[1][j] != '\0')
	{
		(*joined_args)[j] = v[1][j];
		j++;
	}
	(*joined_args)[j] = ' ';
	(*joined_args)[j + 1] = '\0';
	while (i < c)
	{
		p = *joined_args;
		*joined_args = ft_strjoin(*joined_args, v[i]);
		check_empty_arg(i, c, joined_args, v);
		i++;
		/*I guess.. here we should free before calling check_em..
		 * bECAUse.. it frees what we passed to it, so prev ptr (p)
		 * will remaine leaking there wa9ila*/
		free(p);
	}
}
