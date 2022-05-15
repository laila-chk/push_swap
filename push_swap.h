#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	join_all_args(char **joined_args, char **v, int c);
int	check_type(char **str);
int	check_valid_args(char *all_args);


#endif
