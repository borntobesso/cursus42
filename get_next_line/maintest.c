/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsung <rsung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:50:13 by rsung             #+#    #+#             */
/*   Updated: 2021/12/03 20:12:42 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
	int	fd;
	char	*res;

	fd = open("text2.txt", O_RDONLY);
	while ((res = get_next_line(0)) != NULL)
	{
		printf("%s", res);
		free(res);
	}
/*	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);
	res = get_next_line(fd);
	printf("%s", res);
	free(res);*/

	close(fd);
	return (0);
}
