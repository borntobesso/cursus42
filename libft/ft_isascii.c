/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:48:44 by sojung            #+#    #+#             */
/*   Updated: 2021/11/17 21:37:30 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d %d %d %d\n", ft_isascii('0'), ft_isascii(0), ft_isascii('*'), ft_isascii(178));
	// 1 1 1 0
	printf("%d %d %d %d\n", isascii('0'), isascii(0), isascii('*'), isascii(178));

	return(0);
}
