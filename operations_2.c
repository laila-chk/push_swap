/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:16:35 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 12:17:24 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
