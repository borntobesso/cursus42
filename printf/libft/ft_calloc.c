/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:16:52 by sojung            #+#    #+#             */
/*   Updated: 2021/11/30 12:34:26 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*res;

	total_size = nmemb * size;
	if (total_size != 0 && (total_size / nmemb != size))
		return (NULL);
	res = malloc(total_size);
	if (res == NULL)
		return (res);
	ft_bzero(res, total_size);
	return (res);
}
