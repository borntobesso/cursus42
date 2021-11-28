/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:16:52 by sojung            #+#    #+#             */
/*   Updated: 2021/11/27 22:39:11 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	if (total_size != 0 && (total_size / nmemb != size))
		return (NULL);
	res = malloc(total_size);
	if (res == NULL)
		return (res);
	ft_bzero(res, total_size);
	return (res);
}

//#include <string.h>

//int main()
//{
//	void	*p1;
//	void	*p2;
//	int	size = 8539;
//	p1 = ft_calloc(size, sizeof(int));
//	p2 = calloc(size, sizeof(int));
//	printf("difference : %d\n", memcmp(p1, p2, size * sizeof(int)));
//	free(p1);
//	free(p2);
//	return (0);
//}
