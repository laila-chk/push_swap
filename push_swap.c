/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/17 18:22:00 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* DOUBLED NUMBERS!! WHERE'S THE CHECK FOR DOUBLED NUMBERRRRRS?*/
int main(int c, char **v)
{
	char	*joined_args;
	int		*a;
	struct t_vars sz;
//	int		i; // i here is the # of #'s we have in total

	// bro i don't want to allocate to b too.. i may just declare and use it in another func that takess that I
	// and use it in the declaration like : int b[i]
//	i = 0;
	if (c > 2)
	{
		join_all_args(&joined_args, v, c);
	 sz.size  = check_valid_args(joined_args, &a);

	}
		printf("i == %d\n", sz.size);
	/*while (1)
	{
			system("leaks a.out");
			exit(1);
	}*/
		int arr[] = {8, 9, 30, 14};
	ft_push(a, arr, t_vars sz);
	printf("arr[1] = %d\n", arr[1]);
}
