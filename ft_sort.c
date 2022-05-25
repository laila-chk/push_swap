/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:02:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/25 15:16:46 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int **a, int **b, t_vars *sz, int *tmp) 
{
	if (sz->a_len <= 3)
		sort_three(*a, sz->a_len);
	else if (sz->a_len > 3 && sz->a_len < 5)
		sort_five(a, b, sz, tmp);
	else if (sz->a_len >= 5)
	{
		sz->n = 8;
		sort_alot(a, b, sz, tmp);
	}
}
