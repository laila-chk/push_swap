/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_alot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <lchokri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:29:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/25 16:44:17 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_biggest(int *b, int val, int b_len, int *big)
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

void	b_to_a(int **a, int **b, t_vars *sz, int *tmp)
{
	int		index;
	int		i;
	int		tail;
	int 	big;
	tail = 0;
	index = 0;
	i = sz->b_len - 1;
	while (sz->b_len)
	{
		
		tail = sz->a_len - 1;
		if ((find_biggest(*b, tmp[i], sz->b_len, &big)) )
		{
			if((*b)[0] == tmp[i])
			{
				pa(a, b, &(sz->a_len), &(sz->b_len));
				i--;
			}
			else
			{
				if (index == 0 || ((*b)[0] > (*a)[tail] && tail >= 0))
				{
					pa(a, b, &(sz->a_len), &(sz->b_len));
					ra(*a, sz->a_len);
					index++;
				}
				else
				{
					if (big < sz->b_len / 2)
						rb(*b, sz->b_len);
					else
						rrb(*b, sz->b_len);
				}
			}
		}
		else
		{
		//	if(sz->a_len != 0 && index != 0)
		//	{
				index--;
				rra(*a, sz->a_len);
				i--;
		//	}
		}
//		printf("i ===== %d tpm == %d\n ",i, tmp[i]);;
	}
}

void	sort_alot(int **a, int **b, t_vars *sz, int *tmp)
{
	int		m;
	int		w;
	int a_l = sz->a_len;
	int	mw;
	int m_w;

	m = (sz->a_len) / 2;
	w = (sz->a_len) / sz->n;
	mw = m;
	m_w = m;
	*b = ft_calloc(sz->a_len, sizeof(int));
	while (sz->a_len)
	{
		mw += w;
		m_w -= w;
		while (sz->b_len < mw - m_w)
		{
			if (m_w < 0 )
				m_w = 0;
		   	if( mw >= a_l)
				mw = a_l - 1;
			if ((*a)[0] <= tmp[mw] && (*a)[0] >= tmp[m_w])
			{	
				pb(b, a, &(sz->b_len), &(sz->a_len));
				if ((*b)[0] >= tmp[m_w] && (*b)[0] < tmp[m])
				{
					rb(*b, sz->b_len);
				}
			}
			else
				ra(*a, sz->a_len);
		}
	}
	b_to_a(a, b, sz, tmp);
}