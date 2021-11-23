/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:58:46 by sojung            #+#    #+#             */
/*   Updated: 2021/11/18 23:09:39 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

int	main(void)
{
	void	*s;
	char	str1[6] = {'H', 'e', 'l', 'l', 'o'};
	char	str2[6] = {'H', 'e', 'l', 'l', 'o'};

	s = str1;
	printf("Before ft_bzero : %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	ft_bzero(s, 3);
	printf("After ft_bzero : %c%c%c%c%c\n", str1[0], str1[1], str1[2], str1[3], str1[4]);
	s = str2;
	printf("Before bzero : %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	bzero(s, 3);
	printf("After bzero : %c%c%c%c%c\n", str2[0], str2[1], str2[2], str2[3], str2[4]);
	return (0);
}
