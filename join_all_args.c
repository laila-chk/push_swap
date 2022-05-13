/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_all_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:19:15 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/13 14:35:41 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_empty_arg(int i, int c, char *p, char **v)
{
	if ((i <= c  && v[i][0] == '\0') || v[1][0] == '\0')
		{
			free(*joined_args);
			write (2, "Error: empty argument!", 22);
			exit(EXIT_FAILURE);
		}
}

void	join_all_args(char **joined_args, char **v, int c)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	*(joined_args) = ft_calloc(ft_strlen(v[1]), sizeof(char) + 1);
	while (v[1][j] != '\0')
	{
		(*joined_args)[j] = v[1][j];
		j++;
	}
	(*joined_args)[j] = ' ';
	(*joined_args)[j + 1] = '\0';
	printf("c = %d, i = %d\n", c, i);
	while (i < c)
	{
		*joined_args = ft_strjoin(*joined_args, v[i]);
		i++;
		if ((i < c  && v[i][0] == '\0') || v[1][0] == '\0')
		{
			free(*joined_args);
			write (2, "Error: empty argument!", 22);
			exit(EXIT_FAILURE);
		}
	}
}
