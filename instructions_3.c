/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:32:25 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/31 18:32:31 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ins_sa(int *a, int a_len)
{
	ft_swap(a, a_len);
}

void	ins_sb(int *b, int b_len)
{
	ft_swap(b, b_len);
}

void	ins_pa(int **a, int **b, int *a_len, int *b_len)
{
	if (*b_len > 0)
		ft_push(b, a, b_len, a_len);
}
