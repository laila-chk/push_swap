#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct s_vars
{
	int a_len;
	int	b_len;
}	t_vars;

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c, int *i);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	join_all_args(char **joined_args, char **v, int c);
int		check_type(char **str, int i, int *a);
int		check_valid_args(char *all_args, int **a);
void	pa(int *a, int *b, int *a_len, int b_len);
void	pb(int *b, int *a, int *b_len, int a_len);
void	sa(int *a, int a_len);
void	sb(int *b, int b_len);
void	ra(int *a, int a_len);
void	rb(int *b, int b_len);
void	rra(int *a, int a_len);
void	rrb(int *b, int b_len);
void	sort_three(int *a, int a_len);
void	sort_five(int **a, int **b, int *a_len, int *b_len);

#endif
