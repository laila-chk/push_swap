/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:02:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/22 12:08:40 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int **a, int **b, int *a_len, int *b_len)
{
	if (*a_len <= 3)
		sort_three(*a, *a_len);
	else if (*a_len > 3 && *a_len <= 5)
		sort_five(a, b, a_len, b_len);
	else if (*a_len > 5)
		sort_alot(a, b, a_len, b_len);
}
