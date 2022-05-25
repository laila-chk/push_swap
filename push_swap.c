/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/25 14:38:27 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int c, char **v)
{
	char	*joined_args;
	int		*a;
	int		*b;
	int		*tmp;
	t_vars	sz;

int i = 0; //khlito mmnboth 7itach ghan3ml func li kad3amar o dsorti tmp
			//ghir 3gzt db..
	a = NULL;
	b = NULL;
	tmp = NULL;
	if (c > 1)
	{
		sz.b_len = 0;
		join_all_args(&joined_args, v, c);
		sz.a_len  = check_valid_args(joined_args, &a);
		tmp = ft_calloc(sz.a_len, sizeof(int));
		while (i < sz.a_len)
		{
			tmp[i] = a[i];
			i++;
		}
		bubble_sort(&tmp, sz.a_len);
		ft_sort(&a, &b, &sz, tmp);
	}
/*	while (1)
	{
			system("leaks a.out");
			exit(1);
	}*/
/* i = 0;
	while (i < sz.a_len)
	{
		printf("a[%d]=%d  ", i, (a)[i]);
		i++;
	}
	while (i < sz.b_len)
	{
		printf("b[%d]=%d  ", i, (b)[i]);
		i++;
	}
*/
}
