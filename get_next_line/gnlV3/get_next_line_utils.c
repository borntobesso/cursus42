/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:06:06 by sojung            #+#    #+#             */
/*   Updated: 2021/12/09 18:05:12 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	index_new_line(char *save)
{
	int	i;

	i = 0;
	while (save && i < BUFFER_SIZE)
	{
		if (save[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *s)
{
	int	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
	{
		free(s1);
		free(s2);
		return (NULL);
	}
	i = 0;
	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	free(s1);
	free(s2);
	return (res);
}

void	save_left(int index, char *save, char *s)
{
	int		i;

	if (index == -1)
	{
		i = 0;
		while (i < BUFFER_SIZE + 1)
		{
			save[i] = '\0';
			i++;
		}
	}
	else
	{
		i = 0;
		while (index < BUFFER_SIZE && i < index + 1)
		{
			save[i] = s[index + 1];
			index++;
			i++;
		}
	}
}

char	*return_result(int index, char *save)
{
	char	*res;
	int		i;

	if (index == -1) // if there's no '\n', strdup
		return (ft_strdup(save));
	else
	{
		res = malloc(sizeof(char) * (index + 2));
		if (res == NULL)
			return (NULL);
		i = 0;
		while (i < index + 1)
		{
			res[i] = save[i];
			i++;
		}
		res[i] = '\0';
		return (res);
	}
}
