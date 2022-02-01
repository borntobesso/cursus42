/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:51:31 by sojung            #+#    #+#             */
/*   Updated: 2022/01/31 13:56:38 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_img_P_S(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_P_S, \
	x * HEIGHT, y * WIDTH);
}

void	put_img_P_W(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_P_W, \
	x * HEIGHT, y * WIDTH);
}

void	put_img_P_A(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_P_A, \
	x * HEIGHT, y * WIDTH);
}

void	put_img_P_D(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_P_D, \
	x * HEIGHT, y * WIDTH);
}
