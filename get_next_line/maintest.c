/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsung <rsung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:50:13 by rsung             #+#    #+#             */
/*   Updated: 2021/12/06 16:30:00 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*res;

	fd = open("test.txt", O_RDONLY);
	while ((res = get_next_line(0)) != NULL)
	{
		printf("%s", res);
		free(res);
	}
	close(fd);
	return (0);
}
