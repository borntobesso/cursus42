/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:02:02 by sojung            #+#    #+#             */
/*   Updated: 2021/11/18 22:46:07 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

int	main(void)
{
	void	*b;
	char	res1[6] = {'H', 'e', 'l', 'l', 'o'};
	char	res2[6] = {'H', 'e', 'l', 'l', 'o'};
	int	c;
	
	c = 'a';
	b = res1;
	printf("before : %s\n", res1);
	memset(b, c, 4);
	printf("after : %s\n", res1);
	b = res2;
	printf("before : %s\n", res2);
	memset(b, c, 4);
	printf("after : %s\n", res2);
	return (0);
}
