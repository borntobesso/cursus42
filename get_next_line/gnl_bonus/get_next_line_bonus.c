/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:11:11 by sojung            #+#    #+#             */
/*   Updated: 2021/12/06 17:20:20 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup(char *s)
{
	char	*tab;
	int		i;

	tab = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
// leak ok (frees in joinleft)

char	*ft_clean(char **left, char *buf)
{
	char	*result;

	result = ft_put_line(buf);
	*left = ft_return_left(buf, ft_strlen(buf));
	return (result);
}
// leak ok (frees result in main, frees buf in return_left)

char	*ft_joinleft(char **left, int fd)
{
	char	*result;
	char	*new;
	char	*join;

	new = ft_strdup(*left);
	free(*left);
	*left = NULL;
	join = get_next_line(fd);
	result = ft_strjoin(new, join);
	free(join);
	free(new);
	return (result);
}
// leak ok (frees result in main)

char	*get_next_line(int fd)
{
	char		*buf[1024];
	static char	*left[1024];
	int			index_r;

	if (left[fd] != NULL)
	{
		if (ft_chr_newline(left[fd]) == 1)
			return (ft_clean(&left[fd], left[fd]));
		return (ft_joinleft(&left[fd], fd));
	}
	buf[fd] = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf[fd])
		return (NULL);
	index_r = read(fd, buf[fd], BUFFER_SIZE);
	if (index_r == -1 || index_r == 0)
	{
		free(left[fd]);
		free(buf[fd]);
		return (NULL);
	}
	buf[fd][index_r] = '\0';
	if (ft_chr_newline(buf[fd]) == 1)
		return (ft_clean(&left[fd], buf[fd]));
	else
		return (buf[fd]);
}
// leak ok (frees the previous left or buf in ft_clean)
// else, return value freed in main
