/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:11:04 by sojung            #+#    #+#             */
/*   Updated: 2021/11/24 14:10:41 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	count_size(char const *s1, char const *set)
{
	size_t	c_set;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	c_set = 0;
	while (s1[c_set] && check_set(s1[c_set], set))
		c_set++;
	i = 0;
	while (s1[c_set] && 0 < len - i && check_set(s1[len - 1 - i], set))
	{
		c_set++;
		i++;
	}
	return (len - c_set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*res;
	size_t	i;

	size = count_size(s1, set);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		while (*s1 && check_set(*s1, set))
			s1++;
		while (*s1 && i < size)
		{
			res[i] = *s1;
			i++;
			s1++;
		}
	}
	res[i] = '\0';
	return (res);
}
