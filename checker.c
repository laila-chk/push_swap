/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:04:59 by lchokri           #+#    #+#             */
/*   Updated: 2022/06/01 15:13:37 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	fill_tmp(int *a, int *tmp, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		tmp[i] = a[i];
		i++;
	}
}

void	get_instruction(t_vars vr, int *arr, int *b)
{
	while (1)
	{
		vr.s = get_next_line(0);
		if (vr.s == NULL)
		{
			free(vr.s);
			break ;
		}
		check_instruction(&vr, arr, b);
		free(vr.s);
	}
}

void	examine_intructions(t_vars vr, int *arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (vr.len == vr.a_len)
	{
		while (i < vr.len)
		{
			if (arr[i] == vr.a[i])
				j++;
			i++;
		}
		if (j == i)
		{
			write(1, "OK\n", 3);
			exit(EXIT_SUCCESS);
		}
	}
}

int	main(int ac, char **av)
{
	int		*b;
	int		*arranged;
	t_vars	vr;

	arranged = NULL;
	b = NULL;
	if (ac > 1)
	{
		arranged = NULL;
		manage_nums(&vr, ac, av);
		b = malloc(vr.len * sizeof(int));
		arranged = malloc(vr.a_len * sizeof(int));
		fill_tmp(vr.a, arranged, vr.a_len);
		bubble_sort(&arranged, vr.a_len);
		get_instruction(vr, arranged, b);
		examine_intructions(vr, arranged);
		write(1, "KO\n", 3);
	}
	free(arranged);
	free(b);
}
