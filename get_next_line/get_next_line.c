/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:11:11 by sojung            #+#    #+#             */
/*   Updated: 2021/12/03 20:12:49 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s)
{
	char	*tab;
	int	i;

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
} // leak ok (frees in joinleft)

char	*ft_clean(char **left, char *buf)
{
	char	*result;

	result = ft_put_line(buf); // leak ok (frees in main)
	*left = ft_return_left(buf, ft_strlen(buf)); // leak ok (frees in return_left)
	return (result);
}

char	*ft_joinleft(char **left, int fd)
{
	char	*result;
	char	*new;

	new = ft_strdup(*left);
	free(*left);
	*left = NULL;
	result = ft_strjoin(new, get_next_line(fd));
	free(new);
	return (result); // leak ok (frees in main)
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*left;
	int			index_r;

	if (left != NULL)
	{
		if (ft_chr_newline(left) == 1)
			return (ft_clean(&left, left)); // leak ok. frees the previous left in clean. buf exhists not yet.
		return (ft_joinleft(&left, fd)); // leak ok (frees in main)
	}
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	index_r = read(fd, buf, BUFFER_SIZE);
	if (index_r == -1 || index_r == 0)
		return (NULL);
	buf[index_r] = '\0';
	if (ft_chr_newline(buf) == 1)
		return (ft_clean(&left, buf)); // leak ok (frees buf in clean)
	else
		return (buf); //leak ok (frees in main)
}
