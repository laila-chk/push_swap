/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:50 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 14:31:47 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	get_smallest(int **a, int j, t_vars *sz, int *tmp)
{
	int	i;

	i = 0;
	while (i < sz->a_len)
	{
		if ((*a)[i] == tmp[j])
			break ;
		i++;
	}
	if (i <= 1)
	{
		while (i--)
			ra(*a, sz->a_len);
	}
	else
	{
		while (sz->a_len - i)
		{
			rra(*a, sz->a_len);
			i++;
		}
	}
}

void	sort_five(int **a, int **b, t_vars *sz, int *tmp)
{
	int		j;

	j = 0;
	*b = ft_calloc(sz->a_len, sizeof(int));
	while (sz->a_len > 3)
	{
		get_smallest(a, j, sz, tmp);
		pb(b, a, &(sz->b_len), &(sz->a_len));
		j++;
	}
	sort_three(*a, sz->a_len);
	while (sz->b_len)
		pa(a, b, &(sz->a_len), &(sz->b_len));
}
