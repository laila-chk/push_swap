/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:52:10 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/16 19:38:53 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//return # of #s


int	check_valid_args(char *all_args, int **a)
{
	char	**arg;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arg = ft_split(all_args, ' ', &j);	
	*a = ft_calloc(j , sizeof(int) + 1);
	while (arg[i])
	{
		(*a)[i] = check_type(arg, i, *a);
		free(arg[i]);
		i++;
	}
	free(arg);
	return (i);
}
