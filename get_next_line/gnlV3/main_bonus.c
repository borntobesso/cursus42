/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:45:52 by sojung            #+#    #+#             */
/*   Updated: 2021/12/07 18:17:43 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(void)
{
	int	fd[5];
	int	i;
	char	*res[5];
	fd[0] = open("a.txt", O_RDONLY);
	fd[1] = open("b.txt", O_RDONLY);
	fd[2] = open("c.txt", O_RDONLY);
	fd[3] = open("d.txt", O_RDONLY);
	fd[4] = open("e.txt", O_RDONLY);
	res[0] = get_next_line(fd[0]);
	res[1] = get_next_line(fd[1]);
	res[2] = get_next_line(fd[2]);
	res[3] = get_next_line(fd[3]);
	res[4] = get_next_line(fd[4]);
	while (res[0] || res[1] || res[2] || res[3] || res[4])
	{ 
		i = 0;
		while (i < 5)
		{
			if (res[i] != NULL)
			{
				printf("%s", res[i]);
				free(res[i]);
			}
			i++;
		}
		res[0] = get_next_line(fd[0]);
		res[1] = get_next_line(fd[1]);
		res[2] = get_next_line(fd[2]);
		res[3] = get_next_line(fd[3]);
		res[4] = get_next_line(fd[4]);
	}
	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	close(fd[3]);
	close(fd[4]);
	return (0);
}
