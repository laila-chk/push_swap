/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:52:10 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/14 21:15:48 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//return # of #s

check_type

int strlen(char *s)
{
	int i;

	i = 0;
	while (s[i++]);
	return (--i);
}

int	check_valid_args(char *all_args)
{
	char	**arg;
	int		i;

	i = 0;
	arg = ft_split(all_args, ' ');	
	while (arg[i])
	{
		//iwa cheki hna 3la kola el bohdo o stori zmar smw
		free(arg[i]);
		i++;
	}
	free(arg);
	return (i);
}
