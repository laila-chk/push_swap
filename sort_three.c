/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:46:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/19 16:12:23 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	doubled_elm(void)
{
	write(2, "Error: element is dooubled!\n", 29);
	exit(EXIT_FAILURE);
}

void	check_for_two(int *a, int a_len)
{
	if (a_len == 2)
	{
		if (a[0] > a[1])
			sa(a, a_len);
		if (a[0] == a[1])
			doubled_elm();
	}
}

void	sort_three(int *a, int a_len)
{
	check_for_two(a, a_len);
	if (a_len == 3)
	{
		if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
			doubled_elm();
		if (a[0] > a[1] && a[0] > a[2])
		{
			ra(a, a_len);
			if (a[0] > a[1])
				sa(a, a_len);
		}
		else if (a[0] > a[1] && a[0] < a[2])
			sa(a, a_len);
		else if (a[1] > a[0] && a[1] > a[2])
		{
			if (a[0] < a[2])
				sa(a, a_len);
			else
				ra(a, a_len);
			ra(a, a_len);
		}
	}	
}
