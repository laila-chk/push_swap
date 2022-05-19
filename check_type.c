/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:23:38 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/19 16:21:14 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ila bghina nkharjoha khsna nreturniw res, man exitiwchi ila jbarna 7arf hit khsna nfreeyiw lowl li splitina

void	check_if_valid(char **str, int i,int j, unsigned long *res, int *a)
{
	while ((str)[i][j])
	{
		if ((str)[i][j] <= '9' && (str)[i][j] >= '0')
			{
				*res = *res * 10 + (str)[i][j] - '0';
				j++;
			}
		else
		{
			write(2, "Error: argument not a nunmber!", 30);
			free((str)[i]);
			free(str);
			free(a);
			//system("leaks a.out");
			exit(EXIT_FAILURE);
		}
	}
}

int	check_type(char **str, int i, int *a)
{
	int				j;
	long			sign;
	unsigned long	res;

	j = 0;
	sign = 1;
	res = 0;
	while ((str)[i][j] <= 13 && (str)[i][j] >= 9)
		j++;
	if ((str)[i][j] == '-' || (str)[i][j] == '+')
	{
		if (str[i][j] == '-')
			sign *= -1;
		j++;
	}
//	if ((str)[i][j] <= '9' && (str)[i][j] >= '0')
		check_if_valid(str, i, j, &res, a);
//	printf("&&%lu&&\n",sign*res);
	return (sign * res);
}
