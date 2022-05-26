/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:19:32 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 12:20:14 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
