/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:30:46 by sojung            #+#    #+#             */
/*   Updated: 2022/01/26 19:10:34 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_key(int keycode, t_img *img)
{
	if (keycode == 0xff1b)
	{
		destroy_and_free_all(img, 1);
		exit (0);
	}
	return (0);
}

int	close_mouse(t_img *img)
{
	destroy_and_free_all(img, 1);
	exit (0);
	return (0);
}

void	destroy_and_free_all(t_img *img, int flag)
{
	if (flag == 1)
	{
		if (img->img_0)
			mlx_destroy_image(img->mlx, img->img_0);
		if (img->img_1)
			mlx_destroy_image(img->mlx, img->img_1);
		if (img->img_C)
			mlx_destroy_image(img->mlx, img->img_C);
		if (img->img_E)
			mlx_destroy_image(img->mlx, img->img_E);
		if (img->img_P_W)
			mlx_destroy_image(img->mlx, img->img_P_W);
		if (img->img_P_S)
			mlx_destroy_image(img->mlx, img->img_P_S);
		if (img->img_P_A)
			mlx_destroy_image(img->mlx, img->img_P_A);
		if (img->img_P_D)
			mlx_destroy_image(img->mlx, img->img_P_D);
	}
	mlx_destroy_window(img->mlx, img->win);
	mlx_destroy_display(img->mlx);
	free(img->mlx);
}

void	ft_error(t_img *img, char *msg, int flag)
{
	destroy_and_free_all(img, flag);
	printf("Error\n");
	printf("%s", msg);
	exit (1);
}

void	check_img_set(t_img *img)
{
	if (img->img_0 == NULL | img->img_1 == NULL | img->img_C == NULL | \
		img->img_E == NULL | img->img_P_S == NULL | img->img_P_W == NULL | \
		img->img_P_A == NULL | img->img_P_D == NULL)
		ft_error(img, "Can't find one or more image!\n", 1);
}

void	set_img_info(t_img *img)
{
	int	height;
	int	width;

	height = IMG_HEIGHT;
	width = IMG_WIDTH;
	img->img_0 = mlx_xpm_file_to_image(img->mlx, "./img/0.xpm", \
	&width, &height);
	img->img_1 = mlx_xpm_file_to_image(img->mlx, "./img/1.xpm", \
	&width, &height);
	img->img_C = mlx_xpm_file_to_image(img->mlx, "./img/C.xpm", \
	&width, &height);
	img->img_E = mlx_xpm_file_to_image(img->mlx, "./img/E.xpm", \
	&width, &height);
	img->img_P_S = mlx_xpm_file_to_image(img->mlx, "./img/P_S.xpm", \
	&width, &height);
	img->img_P_W = mlx_xpm_file_to_image(img->mlx, "./img/P_W.xpm", \
	&width, &height);
	img->img_P_A = mlx_xpm_file_to_image(img->mlx, "./img/P_A.xpm", \
	&width, &height);
	img->img_P_D = mlx_xpm_file_to_image(img->mlx, "./img/P_D.xpm", \
	&width, &height);
}

int	main(int argc, char **argv)
{
	t_img	img;

	img.mlx = mlx_init();
	img.win = mlx_new_window(img.mlx, 1920, 1080, "*  * * Zero Gravity * *  *");
	if (argc == 2)
		ft_parsing(argv[1], &img);	
	mlx_hook(img.win, 2, 1L<<0, close_key, &img);
	mlx_hook(img.win, 17, 0, close_mouse, &img);
	set_img_info(&img);
	check_img_set(&img);
	mlx_put_image_to_window(img.mlx, img.win, img.img_0, 0, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_1, 64, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_C, 128, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_E, 192, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_W, 256, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_S, 320, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_A, 384, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_D, 448, 0);
	mlx_loop(img.mlx);
	destroy_and_free_all(&img, 1);
}
