/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:55:19 by sojung            #+#    #+#             */
/*   Updated: 2022/02/01 14:58:38 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_screen(t_img *img)
{
	int		i;
	int		j;

	i = -1;
	while (img->map[++i])
	{
		j = -1;
		while (img->map[i][++j])
		{
			if (img->map[i][j] == '0')
				put_img_0(img, j, i);
			else if (img->map[i][j] == '1')
				put_img_1(img, j, i);
			else if (img->map[i][j] == 'C')
				put_img_C(img, j, i);
			else if (img->map[i][j] == 'E')
				put_img_E(img, j, i);
			else if (img->map[i][j] == 'P')
				put_img_P_S(img, j, i);
			else
				ft_error(img, "The map contains unknown character(s).\n", 1);
		}
	}
}

void	prt_msg(t_img *img)
{
	printf("%sItems to collect : %d\n", CYAN, img->collect);
	printf("Moves : %d\n%s", img->move, NORMAL);
}

void	fin_game(t_img *img)
{
	put_img_0(img, img->pos_x, img->pos_y);
	prt_msg(img);
	printf("%sHooray! You've arrived on the Earth safely !\n%s", GREEN, NORMAL);
	destroy_all(img);
	exit (0);
}
