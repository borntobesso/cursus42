/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsung <rsung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:50:13 by rsung             #+#    #+#             */
/*   Updated: 2021/12/07 14:21:09 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*res;

	fd = open("41_with_nl", O_RDONLY);
	while ((res = get_next_line(fd)) != NULL)
	{
		printf("%s", res);
		printf("\n***cut***\n");
		free(res);
	}
	close(fd);
	return (0);
}
