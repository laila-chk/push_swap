/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/12 15:29:26 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	join_all_args(char **joined_args, char **v, int c)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	while (v[1][j] != '\0')
	{
		(*joined_args)[j] = v[1][j];
		j++;
	}
	(*joined_args)[j] = ' ';
	(*joined_args)[j + 1] = '\0';
//	printf("%s", *joined_args);
	while (i < c)
	{
		*joined_args = ft_strjoin(*joined_args, v[i]);
		i++;
	}
}

void	check_args(char *str)
{ /****holap we gotta check on # so we have to works with atoi first ****/
	while (*str)
	{
		if (str)
	}
}

int main(int c, char **v)
{
	char	*joined_args;

	joined_args = ft_calloc(ft_strlen(v[1]), sizeof(char) + 1);
	if (c <= 1)
		write(2, "too few arguments\n", 18);
	else 
	{
		join_all_args(&joined_args, v, c);
		printf("%s", joined_args);
	}
}
