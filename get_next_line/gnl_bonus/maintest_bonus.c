/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsung <rsung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:50:13 by rsung             #+#    #+#             */
/*   Updated: 2021/12/06 17:32:39 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
//	int		fd4;
	char	*res; 

	fd1 = open("text.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);
	fd3 = open("t3.txt", O_RDONLY);
//	fd4 = open("empty_text.txt", O_RDONLY);
	res = get_next_line(fd1);
//	while (res != NULL)
//	{
		printf("%s", res);
		free(res);
		res = get_next_line(fd2);
		printf("%s", res);
		free(res);
		res = get_next_line(fd3);
		printf("%s", res);
		free(res);
//	}
//	if (res)
//		free(res);
	res = get_next_line(fd1);
	printf("%s", res);
	free(res);
	res = get_next_line(fd2);
	printf("%s", res);
	free(res);
	res = get_next_line(fd3);
	printf("%s", res);
	free(res);
	close(fd1);
	close(fd2);
	close(fd3);
//	close(fd4);
	return (0);
}
