/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:30:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/15 13:13:19 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int c, char **v)
{
	char	*joined_args;

	if (c < 2)
		write(2, "Error: too few arguments!\n", 27);
	else 
	{
			join_all_args(&joined_args, v, c);
			printf("%s\n", joined_args);
			check_valid_args(joined_args);
			free(joined_args);
	}
}
