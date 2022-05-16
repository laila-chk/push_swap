/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/16 18:19:31 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

/* DOUBLED NUMBERS!! WHERE'S THE CHECK FOR DOUBLED NUMBERRRRRS?*/
int main(int c, char **v)
{
	char	*joined_args;
	int		*a;
	int		i = 0;
	
	if (c > 2)
	{
		join_all_args(&joined_args, v, c);
		check_valid_args(joined_args, &a);
		free(joined_args);
		while (a[i])
			printf("%d\n", a[i++]);
		free(a);
	}
	while (1)
	{
			system("leaks a.out");
			exit(1);
	}
}
