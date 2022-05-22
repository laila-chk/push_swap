/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_alot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:29:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/22 18:57:41 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	
//IN CASE we wamted to work with sort_five function, pay attention
//to the allocation of b. bc the func allocates again

void	sort_alot(int **a, int **b, int *a_len, int *b_len)
{
	int		*temp;
	int		i;
	int		m;
	int		n;
	int		w;

	int a_l = *a_len;
	i = 0;
	n = 18;
	m = (*a_len) / 2;
	w = (*a_len) / n;
	int	mw;
	int m_w;
	temp = ft_calloc(*a_len, sizeof(int));
	*b = ft_calloc(*a_len, sizeof(int));
	printf("^^^ %d^^^\n", *a_len);
	while (i < *a_len)
	{
		temp[i] = (*a)[i];
		i++;
	}
	i = 0;
	bubble_sort(&temp, *a_len);
	mw = m;
	m_w = m;
	while (*a_len)
	{
		mw += w;
		m_w -= w;
		while (*b_len < mw - m_w)
		{
			if (m_w < 0 )
				m_w = 0;
		   	if( mw >= a_l)
				mw = a_l - 1;
		//	printf("tmp[m_w:%d]=%d   tmp[mw:%d]=%d & a[0] = %d\n", m_w, (temp)[m_w], mw, temp[mw], (*a)[0]);
		//  printf("b's--> %d %d %d %d %d %d %d %d \n", (*b)[0], (*b)[1], (*b)[2], (*b)[3], (*b)[4],(*b)[5], (*b)[6], (*b)[7]);
		//  printf("%d- %d- %d- \n", (*a)[0], (*a)[1], (*a)[2]);	
		if ((*a)[0] <= temp[mw] && (*a)[0] >= temp[m_w])
			{
				pb(b, a, b_len, a_len);
				if ((*b)[0] >= temp[m_w] && (*b)[0] < temp[m])
					rb(*b, *b_len);
			}
			else
					ra(*a, *a_len);
	//	printf("here\n");
		}
		// printf("alen : %d    blen : %d  m:%d   w:%d  mw: %d m_w: %d \n", *a_len, *b_len, m, w, mw, m_w);
//		sleep(1);
	}
	//i = 0;
	//printf("\n");
}
