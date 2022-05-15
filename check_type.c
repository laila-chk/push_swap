/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:23:38 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/15 13:13:13 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ila bghina nkharjoha khsna nreturniw res, man exitiwchi ila jbarna 7arf hit khsna nfreeyiw lowl li splitina

void	check_if_valid(char **str, int i, unsigned long *res)
{
	while ((*str)[i])
	{
		if ((*str)[i] <= '9' && (*str)[i] >= '0')
			{
				*res = *res * 10 + (*str)[i] - '0';
				i++;
			}
		else
		{
			write(2, "Error: argument not a nunmber!", 30);
			free((str)[i]);
			free(str);
			system("leaks a.out");
			exit(EXIT_FAILURE);
		}
	}
}

int	check_type(char **str)
{
	int				i;
	long			sign;
	unsigned long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((*str)[i] <= 13 && (*str)[i] >= 9)
		i++;
	if ((*str)[i] == '-')
	{
		sign *= -1;
		i++;
	}
	if ((*str)[i] <= '9' && (*str)[i] >= '0')
		check_if_valid(str, i, &res);
	return (sign * res);
}
