/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:50 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/21 13:37:45 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**/

void	swap_elm(int **a, int i)
{
	int		holder;

	holder = (*a)[i];
	(*a)[i] = (*a)[i + 1];
	(*a)[i + 1] = holder;
}

void	bubble_sort(int **a, int a_len)
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
			else if ((*a)[j] == (*a)[j + 1])
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
	int		j;

	j = 0;
	i = 0;
	*b = ft_calloc(*a_len, sizeof(int));
	temp = ft_calloc(*a_len, sizeof(int));
	while (i < *a_len)
	{
		temp[i] = (*a)[i];
		i++;

	}
	bubble_sort(&temp, *a_len);
	while (*a_len > 3)
	{
		i = 0;
		while (i < *a_len)
		{
			if ((*a)[i] == temp[j])
				break;
			i++;
		}
		if (i <= 1)
		{
			while (i--)
				ra(*a, *a_len);
		}
		else
		{
			while (*a_len - i)
			{
				rra(*a, *a_len);
				i++;
			}
		}
		pb(b, a, b_len, a_len);
		j++;
	}
	sort_three(*a, *a_len);
	i = 0;
	while (*b_len)
		pa(a, b, a_len, b_len);
	free(temp);
}
