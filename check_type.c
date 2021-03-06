/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <lchokri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:23:38 by lchokri           #+#    #+#             */
/*   Updated: 2022/06/01 16:44:29 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_if_valid(char **str, int i, int j, unsigned long *res)
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
			write(2, "Error\n", 6);
			free((str)[i]);
			free(str);
			exit(EXIT_FAILURE);
		}
	}
	if (*res > 2147483647)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}

int	check_type(char **str, int i)
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
		if (str[i][j] == '\0')
		{
			write(2, "Error\n", 6);
			free((str)[i]);
			free(str);
			exit(EXIT_FAILURE);
		}
	}
	check_if_valid(str, i, j, &res);
	return (sign * res);
}
