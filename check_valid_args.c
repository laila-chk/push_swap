/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <lchokri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:52:10 by lchokri           #+#    #+#             */
/*   Updated: 2022/06/01 14:53:18 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_valid_args(char *all_args, int **a)
{
	char	**arg;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arg = ft_split(all_args, ' ', &j);
	*a = ft_calloc(j, sizeof(int));
	while (arg[i])
	{
		(*a)[i] = check_type(arg, i);
		free(arg[i]);
		i++;
	}
	free(arg);
	free (all_args);
	return (i);
}
