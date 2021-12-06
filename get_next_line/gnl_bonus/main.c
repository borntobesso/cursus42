/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:45:52 by sojung            #+#    #+#             */
/*   Updated: 2021/12/06 18:16:20 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(void)
{
	int	fd[4];
	int	i;
	char	*res[4];
	fd[0] = open("text.txt", O_RDONLY);
	fd[1] = open("text2.txt", O_RDONLY);
	fd[2] = open("t3.txt", O_RDONLY);
	fd[3] = open("empty_text.txt", O_RDONLY);
	while ((res[0] = get_next_line(fd[0])) || (res[1] = get_next_line(fd[1])) || (res[2] = get_next_line(fd[2])))
	{ 
		i = 0;
		while (i < 3)
		{
			if (res[i] != NULL)
			{
				printf("%s", res[i]);
				free(res[i]);
			}
			i++;
		}
	}
	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	close(fd[3]);
}
