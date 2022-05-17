/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/17 20:55:28 by lchokri          ###   ########.fr       */
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
//	int		i; // i here is the # of #'s we have in total

	// bro i don't want to allocate to b too.. i may just declare and use it in another func that takess that I
	// and use it in the declaration like : int b[i]
//	i = 0;
	a  = NULL;
	if (c > 2)
	{
		join_all_args(&joined_args, v, c);
	 sz.a_len  = check_valid_args(joined_args, &a);
	sz.b_len = 4;
	}
	/*while (1)
	{
			system("leaks a.out");
			exit(1);
	}*/
		int arr[5] = {8, 9, 30, 14};
//	rotate(arr, 4);
	ft_push(a, arr, &sz.b_len);
	printf("arr[0] = %d\n", arr[0]);
	printf("arr[1] = %d\n", arr[1]);
	printf("arr[2] = %d\n", arr[2]);
	printf("arr[3] = %d\n", arr[3]);
	printf("arr[4444] = %d\n", arr[4]);
	printf(" %d\n", sz.b_len);
}
