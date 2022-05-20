/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:50 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/20 13:25:55 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	doubled_elm(void)
{
	write(2, "Error: element is dooubled!\n", 29);
	exit(EXIT_FAILURE);
}

void	swap_elm(int **a, int i)
{
	int		holder;

	holder = (*a)[i];
	(*a)[i] = (*a)[i + 1];
	(*a)[i + 1] = holder;
}

void	bubble_sort(int **a, a_len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < a_len - 1)
	{
		j = 0;
		while (j < a_len - 1)
		{
			if ((*a)[j] > (*a)[j + 1])
				swap_elm(a, j);
			else if ((*a)[] == (*a)[j + 1])
				doubled_elm();
			j++;
		}
		i++;
	}
}

void	sort_five(int **a, int **b, int *a_len, int *b_len)
{
	int		i;
	int		*temp;

	i = 0;
	b = ft_calloc(*a_len, sizeof(int));
	temp = ft_calloc(*a_len, sizeof(int));
	while (i < a_len)
	{
		temp[i] = (*a)[i];
		i++;
	}
	bubble_sort(temp, *a_len);
}
