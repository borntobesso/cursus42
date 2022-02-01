/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:51:06 by sojung            #+#    #+#             */
/*   Updated: 2022/02/01 15:25:13 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_all(t_img *img)
{
	destroy_img(img);
	mlx_destroy_window(img->mlx, img->win);
	destroy_mlx(img);
	free_map(img);
}

void	map_up(t_img *img)
{
	int	p_x;
	int	p_y;

	p_x = img->pos_x;
	p_y = img->pos_y; // actual player's position
	if (img->map[p_y - 1][p_x] == 'E' && img->collect == 0)
	{
		img->move++;
		put_img_0(img, p_x, p_y);
		fin_game(img); // player's position to empty image, print overall message and exit the program

	}
	else if (p_y - 1 >= 0 && img->map[p_y - 1][p_x] != '1' && \
		img->map[p_y - 1][p_x] != 'E')
	{
		img->map[p_y][p_x] = '0';
		img->move++; // update map
		if (img->map[p_y - 1][p_x] == 'C')
			img->collect--;
		img->map[p_y - 1][p_x] = 'P';
		img->pos_y = p_y - 1; // update player's position
		put_img_P_W(img, p_x, p_y - 1);
		put_img_0(img, p_x, p_y);
		prt_msg(img);
	}
}

void	map_down(t_img *img)
{
	int	p_x;
	int	p_y;

	p_x = img->pos_x;
	p_y = img->pos_y;
	if (img->map[p_y + 1][p_x] == 'E' && img->collect == 0)
	{
		img->move++;
		put_img_0(img, p_x, p_y);
		fin_game(img);
	}
	else if (p_y + 1 <= img->y && img->map[p_y + 1][p_x] != '1' && \
		img->map[p_y + 1][p_x] != 'E')
	{
		img->map[p_y][p_x] = '0';
		img->move++;
		if (img->map[p_y + 1][p_x] == 'C')
			img->collect--;
		img->map[p_y + 1][p_x] = 'P';
		img->pos_y = p_y + 1;
		put_img_P_S(img, p_x, p_y + 1);
		put_img_0(img, p_x, p_y);
		prt_msg(img);
	}
}

void	map_left(t_img *img)
{
	int	p_x;
	int	p_y;

	p_x = img->pos_x;
	p_y = img->pos_y;
	if (img->map[p_y][p_x - 1] == 'E' && img->collect == 0)
	{
		img->move++;
		put_img_0(img, p_x, p_y);
		fin_game(img);
	}
	else if (p_x - 1 >= 0 && img->map[p_y][p_x - 1] != '1' && \
		img->map[p_y][p_x - 1] != 'E')
	{
		img->map[p_y][p_x] = '0';
		img->move++;
		if (img->map[p_y][p_x - 1] == 'C')
			img->collect--;
		img->map[p_y][p_x - 1] = 'P';
		img->pos_x = p_x - 1;
		put_img_P_A(img, p_x - 1, p_y);
		put_img_0(img, p_x, p_y);
		prt_msg(img);
	}
}

void	map_right(t_img *img)
{
	int	p_x;
	int	p_y;

	p_x = img->pos_x;
	p_y = img->pos_y;
	if (img->map[p_y][p_x + 1] == 'E' && img->collect == 0)
	{
		img->move++;
		put_img_0(img, p_x, p_y);
		fin_game(img);
	}
	else if (p_x + 1 <= img->x && img->map[p_y][p_x + 1] != '1' && \
		img->map[p_y][p_x + 1] != 'E')
	{
		img->map[p_y][p_x] = '0';
		img->move++;
		if (img->map[p_y][p_x + 1] == 'C')
			img->collect--;
		img->map[p_y][p_x + 1] = 'P';
		img->pos_x = p_x + 1;
		put_img_P_D(img, p_x + 1, p_y);
		put_img_0(img, p_x, p_y);
		prt_msg(img);
	}
}

/*void	update_map(t_img *img)
{
	img->collect--;
	img->move++;
}*/
