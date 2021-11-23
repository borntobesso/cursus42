/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:56:11 by sojung            #+#    #+#             */
/*   Updated: 2021/11/17 17:05:12 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d %d %d %d\n", ft_isprint(' '), ft_isprint(6), ft_isprint('*'), ft_isprint(127));
	// 1 0 1 0
	return (0);
}
