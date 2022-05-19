/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:50 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/19 16:56:49 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(int *a, int *b, int *a_len, int *b_len)
{
	int key;
	int i;
	int	j;
	int smalest;
	
	i = 1;
	j = 0;
	key = 0;
	while (i < a_len - 1)
	{
		if (a[j] < a[i])
			key++;
		j++;
	}
}
