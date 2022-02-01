/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_img_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:50:54 by sojung            #+#    #+#             */
/*   Updated: 2022/01/31 13:51:15 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_img_0(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_0, \
	x * HEIGHT, y * WIDTH);
}

void	put_img_1(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_1, \
	x * HEIGHT, y * WIDTH);
}

void	put_img_C(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_C, \
	x * HEIGHT, y * WIDTH);
}

void	put_img_E(t_img *img, int x, int y)
{
	mlx_put_image_to_window(img->mlx, img->win, img->img_E, \
	x * HEIGHT, y * WIDTH);
}
