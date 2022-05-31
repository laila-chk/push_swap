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

#include "checker.h"

void	ins_pb(int **b, int **a, int *b_len, int *a_len)
{
	if (*a_len > 0)
		ft_push(a, b, a_len, b_len);
}

void	ins_ra(int *a, int a_len)
{
	if (a_len > 1)
		rotate(a, a_len);
}

void	ins_rb(int *b, int b_len)
{
	if (b_len > 1)
		rotate(b, b_len);
}

void	ins_rra(int *a, int a_len)
{
	if (a_len > 1)
		reverse_rotate(a, a_len);
}

void	ins_rrb(int *b, int b_len)
{
	if (b_len > 1)
		reverse_rotate(b, b_len);
}
