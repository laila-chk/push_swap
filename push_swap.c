/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 15:58:06 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	fill_tmp(int *a, int *tmp, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		tmp[i] = a[i];
		i++;
	}
}

void	check_if_sorted(int *a, int *tmp, int len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < len)
	{
		if (tmp[i] == a[i])
			j++;
		i++;
	}
	if (i == j)
		exit(1);
}

int	main(int c, char **v)
{
	char	*joined_args;
	int		*a;
	int		*b;
	int		*tmp;
	t_vars	sz;

	a = NULL;
	b = NULL;
	tmp = NULL;
	if (c > 1)
	{
		sz.b_len = 0;
		join_all_args(&joined_args, v, c);
		sz.a_len = check_valid_args(joined_args, &a);
		tmp = ft_calloc(sz.a_len, sizeof(int));
		fill_tmp(a, tmp, sz.a_len);
		bubble_sort(&tmp, sz.a_len);
		check_if_sorted(a, tmp, sz.a_len);
		ft_sort(&a, &b, &sz, tmp);
	}
}

/*	while (1)
	{
			system("leaks push_swap");
			exit(1);
	}*/
