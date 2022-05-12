/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/12 15:26:52 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


int main(int c, char **v)
{
	char	**p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (c <= 1)
		write(2, "too few arguments\n", 18);
	else if (c == 2)
	{
		p = ft_split(v[1], ' ');
		printf("__%s__\n", p[0]);
	}
	else
	{
		p = ft_calloc(c, sizeof(char *)); /*c is the # of args, the ./a.out is counted as well 
										that's y we don't need to add one as we usually do for the \0 */
		while (v[i])
		{
			p[i] = v[i];
			i++;
		}

	}
}
