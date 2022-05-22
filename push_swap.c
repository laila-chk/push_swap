/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/22 18:23:55 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* DOUBLED NUMBERS!! WHERE'S THE CHECK FOR DOUBLED NUMBERRRRRS?*/
int main(int c, char **v)
{
	char	*joined_args;
	int		*a;
	int		*b;
	t_vars	sz;
	
	a = NULL;
	b = NULL;
	if (c > 1)
	{
		join_all_args(&joined_args, v, c);
		sz.a_len  = check_valid_args(joined_args, &a);
//		if (sz.a_len > 1 && sz.a_len <= 3)
//			sort_three(a, sz.a_len);
//		sort_five(&a, &b, &(sz.a_len), &(sz.b_len));
		ft_sort(&a, &b, &(sz.a_len), &(sz.b_len));
	}
/*	while (1)
	{
			system("leaks a.out");
			exit(1);
	}*/
//int i = 0;
/*	while (i < sz.a_len)
	{
		printf("a[%d]=%d  ", i, (a)[i]);
		i++;
	}*/
/*	while (i < sz.b_len)
	{
		printf("b[%d]=%d  ", i, (b)[i]);
		i++;
	}
*/
}
