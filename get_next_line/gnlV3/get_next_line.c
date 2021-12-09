/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:30:51 by sojung            #+#    #+#             */
/*   Updated: 2021/12/09 18:05:10 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_result(char *s, char *save, int fd)
{
	int		index;
	char	*res;

	index = index_new_line(s);
	res = return_result(index, s);
	save_left(index, save, s);
	if (index == -1)
		res = ft_strjoin(res, get_next_line(fd));// free get() and result in strjoin!
	return (res);
}

char	*get_next_line(int fd)
{
	static char	save[BUFFER_SIZE + 1];
	char		*buf;
	int			read_index;
	char		*res;

	if (save[0] != '\0')
		return (ft_result(save, save, fd));
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	read_index = read(fd, buf, BUFFER_SIZE);
	if (read_index <= 0)
	{
		free(buf);
		return (NULL);
	}
	buf[read_index] = '\0';
	res = ft_result(buf, save, fd);
	free(buf);
	return (res);
}
