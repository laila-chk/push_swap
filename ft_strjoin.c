/*add that hader later*/

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
			str[i++] = s2[j++];
	}
	str[i] = ' ';
	i++;
	str[i] = '\0';
	return (str);
}
