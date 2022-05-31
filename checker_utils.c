/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:02:40 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/31 19:03:02 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	manage_nums(t_vars *vr, int ac, char **av)
{
	join_all_args(&(vr->nums), av, ac);
	vr->a_len = check_valid_args(vr->nums, &(vr->a));
	vr->len = vr->a_len;
}

void	check_instruction(t_vars *vr, int *arr, int *b)
{
	if (vr->s[0] == 's' && vr->s[1] == 'a' && vr->s[2] == '\n')
		ins_sa(vr->a, vr->a_len);
	else if (vr->s[0] == 's' && vr->s[1] == 'b' && vr->s[2] == '\n')
		ins_sb(b, vr->b_len);
	else if (vr->s[0] == 'p' && vr->s[1] == 'a' && vr->s[2] == '\n')
		ins_pa(&(vr->a), &(b), &(vr->a_len), &(vr->b_len));
	else if (vr->s[0] == 'p' && vr->s[1] == 'b' && vr->s[2] == '\n')
		ins_pb(&(b), &(vr->a), &(vr->b_len), &(vr->a_len));
	else if (vr->s[0] == 'r' && vr->s[1] == 'a' && vr->s[2] == '\n')
		ins_ra(vr->a, vr->a_len);
	else if (vr->s[0] == 'r' && vr->s[1] == 'b' && vr->s[2] == '\n')
		ins_rb(b, vr->b_len);
	else if (vr->s[0] == 'r' && vr->s[1] == 'r' && vr->s[3] == '\n')
	{
		if (vr->s[2] == 'a')
			ins_rra(vr->a, vr->a_len);
		else if (vr->s[2] == 'b')
			ins_rrb(b, vr->b_len);
	}
	else
	{
		free(arr);
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
}
