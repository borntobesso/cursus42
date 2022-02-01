/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:40:11 by sojung            #+#    #+#             */
/*   Updated: 2022/01/30 15:24:17 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_key_b(int keycode, t_img *img)
{
	if (keycode == 0xff1b)
	{
		destroy_img_b(img);
		destroy_img_b_2(img);
		mlx_destroy_window(img);
		destroy_mlx(img);
		exit (0);
	}
	return (0);
}

int	close_mouse_b(t_img *img)
{
	destroy_img_b(img);
	destroy_img_b_2(img);
	mlx_destroy_window(img);
	destroy_mlx(img);
	exit (0);
	return (0);
}

void	destroy_img_b(t_img *img)
{
	if (img->img_0)
		mlx_destroy_image(img->mlx, img->img_0);
	if (img->img_1)
		mlx_destroy_image(img->mlx, img->img_1);
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

void	destroy_img_b_2(t_img *img)
{
	if (img->img_C1)
		mlx_destroy_image(img->mlx, img->img_C1);
	if (img->img_C2)
		mlx_destroy_image(img->mlx, img->img_C2);
	if (img->img_C3)
		mlx_destroy_image(img->mlx, img->img_C3);
	if (img->img_C4)
		mlx_destroy_image(img->mlx, img->img_C4);
	if (img->img_C5)
		mlx_destroy_image(img->mlx, img->img_C5);
	if (img->img_C6)
		mlx_destroy_image(img->mlx, img->img_C6);
	if (img->img_C7)
		mlx_destroy_image(img->mlx, img->img_C7);
	if (img->img_C8)
		mlx_destroy_image(img->mlx, img->img_C8);
	if (img->img_B)
		mlx_destroy_image(img->mlx, img->img_B);
}


void	ft_error_b(t_img *img, char *msg, int flag)
{
	if (flag == 1)
	{
		destroy_img_b(img);
		destroy_img_b_2(img);
		mlx_destroy_window(img);
	}
	destroy_mlx(img);
	printf("Error\n");
	printf("%s", msg);
	exit (1);
}

void	check_img_set_b(t_img *img)
{
	if (img->img_0 == NULL | img->img_1 == NULL | img->img_C1 == NULL | \
		img->img_C2 == NULL | img->img_C3 == NULL | img->img_C4 == NULL | \
		img->img_C5 == NULL | img->img_C6 == NULL | img->img_C7 == NULL | \
		img->img_C8 == NULL | img->img_E == NULL | img->img_P_S == NULL | \
		img->img_P_W == NULL | img->img_P_A == NULL | img->img_P_D == NULL | \
		img->img_B == NULL)
		ft_error_b(img, "Can't find one or more image!\n", 1);
}

void	set_img_info_b(t_img *img)
{
	int	height;
	int	width;

	height = IMG_HEIGHT;
	width = IMG_WIDTH;
	img->img_0 = mlx_xpm_file_to_image(img->mlx, "./img/0.xpm", \
	&width, &height);
	img->img_1 = mlx_xpm_file_to_image(img->mlx, "./img/1.xpm", \
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
	img->img_B = mlx_xpm_file_to_image(img->mlx, "./img/B.xpm", \
	&width, &height);
}

void	set_img_info_b_2(t_img *img)
{
	int	height;
	int	width;

	height = IMG_HEIGHT;
	width = IMG_WIDTH;
	img->img_C1 = mlx_xpm_file_to_image(img->mlx, "./img_b/C1.xpm", \
	&width, &height);
	img->img_C2 = mlx_xpm_file_to_image(img->mlx, "./img_b/C2.xpm", \
	&width, &height);
	img->img_C3 = mlx_xpm_file_to_image(img->mlx, "./img_b/C3.xpm", \
	&width, &height);
	img->img_C4 = mlx_xpm_file_to_image(img->mlx, "./img_b/C4.xpm", \
	&width, &height);
	img->img_C5 = mlx_xpm_file_to_image(img->mlx, "./img_b/C5.xpm", \
	&width, &height);
	img->img_C6 = mlx_xpm_file_to_image(img->mlx, "./img_b/C6.xpm", \
	&width, &height);
	img->img_C7 = mlx_xpm_file_to_image(img->mlx, "./img_b/C7.xpm", \
	&width, &height);
	img->img_C8 = mlx_xpm_file_to_image(img->mlx, "./img_b/C8.xpm", \
	&width, &height);
	img->img_B = mlx_xpm_file_to_image(img->mlx, "./img_b/B.xpm", \
	&width, &height);
}


int	main(int argc, char **argv)
{
	t_img	img;
	char	*map;

	if (argc == 2)
	{
		map = read_map(argv[1]);
		printf("%s", map);
		free(map);
	}
	img.mlx = mlx_init();
	img.win = mlx_new_window(img.mlx, 1920, 1080, "*  * * Zero Gravity * *  *");
	mlx_hook(img.win, 2, 1L<<0, close_key_b, &img);
	mlx_hook(img.win, 17, 0, close_mouse_b, &img);
	set_img_info_b(&img);
	set_img_info_b_2(&img);
	check_img_set_b(&img);
	mlx_put_image_to_window(img.mlx, img.win, img.img_0, 0, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_1, 64, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_C8, 128, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_E, 192, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_W, 256, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_S, 320, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_A, 384, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_P_D, 448, 0);
	mlx_put_image_to_window(img.mlx, img.win, img.img_B, 512, 0);
	mlx_loop(img.mlx);
	destroy_img_b(&img);
	destroy_and_free_all_b(&img);
	return (0);
}
