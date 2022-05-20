/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:12:50 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/20 17:44:15 by lchokri          ###   ########.fr       */
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

	i = 0;
	b = ft_calloc(*a_len, sizeof(int));
	temp = ft_calloc(*a_len, sizeof(int));
	while (i < *a_len)
	{
		temp[i] = (*a)[i];
		i++;
	}
	bubble_sort(&temp, *a_len);
	i = 0;
	while (i < *a_len)
	{
		if ((*a)[i] == temp[0])
			break;
		i++;
	}
	printf("**%d**\n", i);
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
//	printf("b len is %d\n", *b_len);
//	printf("%d- %d- %d- \n", (*a)[0], (*a)[1], (*a)[2]);
//	printf("%d- %d- %d- \n", (*b)[0], (*b)[1], (*b)[2]);
	free(temp);
}
