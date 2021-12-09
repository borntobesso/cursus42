/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:14:13 by sojung            #+#    #+#             */
/*   Updated: 2021/11/29 19:11:38 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				len;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	len = ft_strlen(s) + 1;
	while (0 < len)
	{
		if (str[len - 1] == (unsigned char)c)
			return ((char *)&str[len - 1]);
		len--;
	}
	return (NULL);
}
