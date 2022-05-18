/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:01:37 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/18 14:04:48 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *i, int len)
{
	int k;
	k = i[0];
	if (len > 1)
	{
		printf("sldf");
		i[0] = i[1];
		i[1] = k;
	}
}

void ft_push(int *i, int *j, int *len) //len is either b_len or a_len, depends on pa or pb, and what strc el we pass
{
	int k;

	k = *len;
	while (k > 0)
	{
		j[k] = j[k - 1];
		k--;
	}
	j[0] = i[0];
	(*len)++;
}

void	rotate(int *i, int len)
{
	int		j;
	int		k;

	j = 0;
	k = i[0];
	while(j < len)
	{
		i[j] = i[j + 1];
		j++;
	}
	i[len - 1] = k;
}

void	sa(int *i, int len)
{
	ft_swap(i, len);
	write(1, "sa\n", 3);
}
