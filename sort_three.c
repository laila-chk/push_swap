/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:46:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/19 00:39:20 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	doubled_elm(void)
{
	write(2, "Error: element is dooubled!\n", 29);
	// Do i need to free a? 
	exit(EXIT_FAILURE);
}

void	sort_three(int *a, int a_len)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (a_len == 2)
	{
		if (a[0] < a[1])
			sa(a, a_len);
		else if (a[0] == a[1])
			doubled_elm();
	}
	else if (a_len == 3)
	{
		// i think i'll push smalest elem into b, call the case of len =2 and pa angain
	}
}
