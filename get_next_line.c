/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:40:19 by lchokri           #+#    #+#             */
/*   Updated: 2022/05/31 18:18:14 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <string.h>*/

#include "checker.h"

#define BUFFER_SIZE 1

char	*ft_keep_going(char **saved)
{
	char	*tmp;
	char	*toret;

	toret = ft_strdup(*saved, '\n');
	if (ft_strchr(*saved, '\n'))
	{
		tmp = *saved;
		*saved = ft_strdup(ft_strchr(*saved, '\n') + 1, '\0');
		free_it(&tmp, NULL);
	}
	else
		free_it(saved, NULL);
	return (toret);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*toret;
	static char	*saved = NULL;
	int			ret;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!saved)
		saved = ft_strdup(saved, '\0');
	ret = 1;
	while (ft_strchr(saved, '\n') == 0 && ret != 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret < 0)
			return (free_it(&saved, &buf));
		buf[ret] = '\0';
		saved = ptrjoin(&saved, buf);
	}
	toret = ft_keep_going(&saved);
	free_it(&buf, NULL);
	if (*toret == '\0')
		return (free_it(&toret, &saved));
	return (toret);
}
