/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:33:53 by sojung            #+#    #+#             */
/*   Updated: 2021/11/17 17:02:16 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d %d %d %d\n", ft_isdigit(1), ft_isdigit('1'), ft_isdigit(52), ft_isdigit('a'));
	//0 1 1 0
	return (0);
}
