/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:31:22 by sojung            #+#    #+#             */
/*   Updated: 2022/02/01 17:30:13 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_arg(char *file)
{
	int	i;

	i = 0;
	while (file[i])
		i++;
	i--;
	if (i <= 3)
	{
		printf("%sError\n", RED);
		printf("%sThe argument is not valid.\n%s", YELLOW, NORMAL);
		exit (1);
	}
	else if (file[i] != 'r' || file[i - 1] != 'e' || file[i - 2] != 'b' || \
		file[i - 3] != '.' || file[i - 4] == '/' || file[i - 4] == '.')
	{
		printf("%sError\n", RED);
		printf("%sThe argument is not valid.\n%s", YELLOW, NORMAL);
		exit (1);
	}
	return (1);
}

void	ft_init_img(t_img *img)
{
	img->mlx = NULL;
	img->win = NULL;
	img->x = 0;
	img->y = 0;
	img->map = NULL;
	img->img_0 = NULL;
	img->img_1 = NULL;
	img->img_C = NULL;
	img->img_E = NULL;
	img->img_P_S = NULL;
	img->img_P_W = NULL;
	img->img_P_A = NULL;
	img->img_P_D = NULL;
	img->collect = 0;
	img->move = 0;
	img->pos_x = 0;
	img->pos_y = 0;
}

void	init_player_pos(t_img *img)
{
	char	**map;
	int		i;
	int		j;

	map = img->map;
	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				img->pos_x = j;
				img->pos_y = i;
			}
			j++;
		}
		i++;
	}
}
