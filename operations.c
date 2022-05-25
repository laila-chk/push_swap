/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:01:37 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/25 14:14:09 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *i, int len)
{
	int k;
	k = i[0];
	if (len > 1)
	{
		i[0] = i[1];
		i[1] = k;
	}
}

void ft_push(int **from, int **to, int *f_len, int *t_len)
{
	int		k;
	int		l;

	k = *t_len;
	l = 0;
	while (k > 0)
	{
		(*to)[k] = (*to)[k - 1];
		k--;
	}
	(*to)[0] = (*from)[0];
	while (l < *f_len - 1)
	{
		(*from)[l] = (*from)[l + 1];
		l++;
	}
	(*t_len)++;
	(*f_len)--;
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

void	reverse_rotate(int *i, int len)
{
	int	j;
	int	k;

	j = 1;
	k = i[len - 1];
	while (j < len)
	{
		i[len - j] = i[len - j - 1];
		j++;
	}
	i[0] = k;
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

void	pa(int **a, int **b, int *a_len, int *b_len)
{
	if (*b_len > 0)
	{
		ft_push(b, a, b_len, a_len);
		write(1, "pa\n", 3);
	}
}

void	pb(int **b, int **a, int *b_len, int *a_len)
{
	if (*a_len > 0)
	{
		ft_push(a, b, a_len, b_len);
		write(1, "pb\n", 3);
	}
}

void	ra(int *a, int a_len)
{
	if (a_len > 1)
	{
		rotate(a, a_len);
		write(1, "ra\n", 3);
	}
}

void	rb(int *b, int b_len)
{
	if (b_len > 1)
	{
		rotate(b, b_len);
		write(1, "rb\n", 3);
	}
}

void	rra(int *a, int a_len)
{
	if (a_len > 1)
	{
		reverse_rotate(a, a_len);
		write(1, "rra\n", 4);
	}
}

void	rrb(int *b, int b_len)
{
	if (b_len > 1)
	{
		reverse_rotate(b, b_len);
		write(1, "rrb\n", 4);
	}
}
