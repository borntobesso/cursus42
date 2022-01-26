/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:29:07 by sojung            #+#    #+#             */
/*   Updated: 2022/01/26 19:10:30 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*read_map(char *file)
{
	int		fd;
	char	*tmp;
	char	*line;
	char	*map;

	tmp = malloc(sizeof(char) * 1);
	if (!tmp)
		return (NULL);
	tmp[0] = '\0';
	fd = open(file, O_RDONLY);
	printf("check1\n");
	line = get_next_line(fd); // for free
	printf("check2\n");
	map = ft_strjoin(tmp, line, 1); // for free
	printf("check3\n");
	while (line)
	{	
		free(line);
		line = get_next_line(fd);
		map = ft_strjoin(map, line, 1);
	}
	printf("check4\n");
	free(line);
	return (map);
}

void	ft_parsing(char *file, t_img *img)
{
	char	*map;
	char	**matrix;

	map = read_map(file); // for free
	if (!map)
		ft_error(img, "Problem encountered reading the map.\n", 0);
	printf("check5\n");
	matrix = ft_split(map, '\n', img);
	printf("check6\n");
	free(map);
	int i = 0;
	while (matrix[i])
	{
		printf("%s ", matrix[i]);
		i++;
	}
	printf("check7\n");
}
