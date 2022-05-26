/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_alot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <lchokri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:29:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/26 15:55:42 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(int *b, int val, int b_len, int *big)
{
	int	i;

	i = 0;
	while (i < b_len)
	{
		if (b[i] == val)
		{
			*big = i;
			return (1);
		}
		i++;
	}
	return (0);
}

void	biggest_in_b(int **a, int **b, int *tmp, t_vars *sz)
{
	if ((*b)[0] == tmp[sz->i])
	{
		pa(a, b, &(sz->a_len), &(sz->b_len));
		sz->i--;
	}
	else if (sz->index == 0 || ((*b)[0]
		> (*a)[sz->a_len - 1] && sz->a_len - 1 >= 0))
	{
		pa(a, b, &(sz->a_len), &(sz->b_len));
		ra(*a, sz->a_len);
		sz->index++;
	}
	else if (sz->big < sz->b_len / 2)
		rb(*b, sz->b_len);
	else if (sz->big >= sz->b_len / 2)
		rrb(*b, sz->b_len);
}

void	b_to_a(int **a, int **b, t_vars *sz, int *tmp)
{
	sz->index = 0;
	sz->i = sz->b_len - 1;
	while (sz->b_len || sz->index != 0)
	{	
		if ((find_biggest(*b, tmp[sz->i], sz->b_len, &(sz->big))))
			biggest_in_b(a, b, tmp, (sz));
		else
		{
			sz->index--;
			rra(*a, sz->a_len);
			sz->i--;
		}
	}
}

void	sort_alot(int **a, int **b, t_vars *sz, int *tmp)
{
	sz->mw = sz->m;
	sz->m_w = sz->m;
	*b = ft_calloc(sz->a_len, sizeof(int));
	while (sz->a_len)
	{
		sz->mw += sz->w;
		sz->m_w -= sz->w;
		while (sz->b_len < sz->mw - sz->m_w)
		{
			if (sz->m_w < 0 )
				sz->m_w = 0;
			if (sz->mw >= sz->a_l)
				sz->mw = sz->a_l - 1;
			if ((*a)[0] <= tmp[sz->mw] && (*a)[0] >= tmp[sz->m_w])
			{	
				pb(b, a, &(sz->b_len), &(sz->a_len));
				if ((*b)[0] >= tmp[sz->m_w] && (*b)[0] < tmp[sz->m])
					rb(*b, sz->b_len);
			}
			else
				ra(*a, sz->a_len);
		}
	}
	b_to_a(a, b, sz, tmp);
}
