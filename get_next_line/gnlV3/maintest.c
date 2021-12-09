/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:36:42 by sojung            #+#    #+#             */
/*   Updated: 2021/12/09 18:07:22 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*res;

	fd = open("a.txt", O_RDONLY);
//	while ((res = get_next_line(fd)) != NULL)
//	{
		res = get_next_line(fd);
		printf("%s", res);
		printf("***cut***\n");
		free(res);
//	}
	close(fd);
	return (0);
}
