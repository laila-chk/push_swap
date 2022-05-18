/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/19 00:39:24 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* DOUBLED NUMBERS!! WHERE'S THE CHECK FOR DOUBLED NUMBERRRRRS?*/
int main(int c, char **v)
{
	char	*joined_args;
	int		*a;
	t_vars	sz;
	
	a  = NULL;
	if (c > 1)
	{
		join_all_args(&joined_args, v, c);
		sz.a_len  = check_valid_args(joined_args, &a);
		//if (sz.a_len == 1)
			//one number msorti mn 3and lah
		if (sz.a_len > 1 && sz.a_len <= 3)
		{
			sort_three(a, sz.a_len);
		}
	/*while (1)
	{
			system("leaks a.out");
			exit(1);
	}*/
	}
	printf("%d %d %d \n", a[0], a[1], a[2]);
}
/* THE THING IS!!! if i'll compare while sorting i have to save the instructions
 * in an arr and print them only when my stack is fully stored, otherwise we'll
 * print the shity instrutioons that happened berfore we detect the doubled number ..
 **/
