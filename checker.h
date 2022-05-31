/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:10:57 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/31 19:05:28 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_vars
{
	int		*a;
	char	*s;
	char	*nums;
	int		a_len;
	int		b_len;
	int		len;

}	t_vars;

void	manage_nums(t_vars *vr, int ac, char **av);
void	check_instruction(t_vars *vr, int *arr, int *b);
void	join_all_args(char **joined_args, char **v, int c);
int		check_valid_args(char *all_args, int **a);
void	bubble_sort(int **a, int a_len);
size_t	ft_strlen(const char *s);
int		check_type(char **str, int i);
char	**ft_split(char const *s, char c, int *i);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*free_it(char **ptr, char **pt);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(const char *s1, char X);
char	*ptrjoin(char **s1, char *s2);
void	ft_swap(int *i, int len);
void	ft_push(int **from, int **to, int *f_len, int *t_len);
void	rotate(int *i, int len);
void	reverse_rotate(int *i, int len);
void	ins_pa(int **a, int **b, int *a_len, int *b_len);
void	ins_pb(int **b, int **a, int *b_len, int *a_len);
void	ins_sa(int *a, int a_len);
void	ins_sb(int *b, int b_len);
void	ins_ra(int *a, int a_len);
void	ins_rb(int *b, int b_len);
void	ins_rra(int *a, int a_len);
void	ins_rrb(int *b, int b_len);

#endif
