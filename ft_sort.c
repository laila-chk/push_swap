/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:02:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 16:31:59 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int **a, int **b, t_vars *sz, int *tmp)
{
	if (sz->a_len <= 3)
		sort_three(*a, sz->a_len);
	else if (sz->a_len > 3 && sz->a_len <= 5)
		sort_five(a, b, sz, tmp);
	else if (sz->a_len > 5)
	{
		sz->n = 8;
		sz->m = (sz->a_len) / 2;
		sz->w = (sz->a_len) / (sz->n);
		sz->a_l = (sz->a_len);
		sort_alot(a, b, sz, tmp);
	}
}
// ranges: 5-50 | 50-150 
