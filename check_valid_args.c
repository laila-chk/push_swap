/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:52:10 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/15 13:05:12 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//return # of #s


int	check_valid_args(char *all_args)
{
	char	**arg;
	int		i;

	i = 0;
	arg = ft_split(all_args, ' ');	
	while (arg[i])
	{
		check_type(arg);
		//iwa cheki hna 3la kola el bohdo o stori zmar smw
		free(arg[i]);
		i++;
	}
	while (1)
	{
		system("leaks a.out");
		exit(0);
	}
	free(arg);
	return (i);
}
