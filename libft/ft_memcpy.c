/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:12:19 by sojung            #+#    #+#             */
/*   Updated: 2021/11/18 23:35:07 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;

	d = dst;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	void	*dst;
	const void	*src;
	char	d1[6] = {'a', 'b', 'c', 'd', 'e'};
	char	d2[6] = {'a', 'b', 'c', 'd', 'e'};
	char	s[6] = {'H', 'e', 'l', 'l', 'o'};

	printf("Before ft_memcpy : %c%c%c%c%c\n", d1[0], d1[1], d1[2], d1[3], d1[4]);
	dst = d1;
	src = s;
	ft_memcpy(d1, s, 3);
	printf("After ft_memcpy : %c%c%c%c%c\n", d1[0], d1[1], d1[2], d1[3], d1[4]);
	printf("Before memcpy : %c%c%c%c%c\n", d2[0], d2[1], d2[2], d2[3], d2[4]);
	dst = d2;
	memcpy(d2, s, 3);
	printf("After memcpy : %c%c%c%c%c\n", d2[0], d2[1], d2[2], d2[3], d2[4]);
	return (0);
}
