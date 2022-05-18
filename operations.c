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

int	rotate(int *i, int len)
{
	int		j;
	int		k;

	j = 0;
	k = i[0];
	while(j < len/* and len > 1*/)
		i[j] = i[j + 1];
		j++;
	}
	i[len - 1] = k;
}

void	sa(int *a, int a_len)
{
	ft_swap(a, a_len);
	write(1, "sa\n", 3);
}

void	sb(int *b, int b_len)
{
	ft_swap(b, b_len);
	write(1, "sb\n", 3);
}

void	pa(int *a, int *b, int *a_len, int b_len)
{
	if (b_len > 0)
	{
		ft_push(b, a, a_len);
		write(1, "ra\n", 3);
	}
}

void	pb(int *b, int *a, int *b_len, int a_len)
{
	if (a_len > 0)
	{
		ft_push(a, b, b_len);
		write(1, "ra\n", 3);
	}
}

void	ra(int *a, int a_len)
{
	rotate(a, a_len);
	write(1, "ra\n", 3);
}

void	rb(int *b, int b_len)
{
	rotate(b, b_len);
	//we print only when rotation actually happens..
	//in my func 'rotate' i do rotate even if len is one, we need\
	//to add an if condition there i guess
}

