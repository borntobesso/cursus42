/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:40:37 by sojung            #+#    #+#             */
/*   Updated: 2021/11/17 17:03:29 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||\
		(c >= '0' && c <= '9'))
		return(1);
	else
		return (0);
}

int	main(void)
{
	printf("%d %d %d %d\n", ft_isalnum('9'), ft_isalnum(9), ft_isalnum('c'), ft_isalnum(0));
	//1 0 1 0?
	return(0);
}
