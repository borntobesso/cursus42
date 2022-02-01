/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:30:46 by sojung            #+#    #+#             */
/*   Updated: 2022/02/01 14:56:54 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	close_key(int keycode, t_img *img)
{
	if (keycode == 0xff1b)
	{
		destroy_all(img);
		exit (0);
	}
	else if (keycode == 0x77 || keycode == 0xff52) // up keys
		map_up(img);
	else if (keycode == 0x73 || keycode == 0xff54) // down keys
		map_down(img);
	else if (keycode == 0x61 || keycode == 0xff51) // left keys
		map_left(img);
	else if (keycode == 0x64 || keycode == 0xff53) // right keys
		map_right(img);
	return (0);
}

int	close_mouse(t_img *img)
{
	destroy_all(img);
	exit (0);
	return (0);
}

void	destroy_img(t_img *img)
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

void	destroy_mlx(t_img *img)
{
	mlx_destroy_display(img->mlx);
	free(img->mlx);
}

void	ft_error(t_img *img, char *msg, int flag) // flag 0 = destroy_mlx, flag 1 = all 
{
	if (flag == 1)
	{
		destroy_img(img);
		mlx_destroy_window(img->mlx, img->win);
	}
	destroy_mlx(img);
	printf("%sError\n", RED);
	printf("%s%s%s", YELLOW, msg, NORMAL);
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

	height = HEIGHT;
	width = WIDTH;
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

	if (argc == 2)
	{
		ft_init_img(&img); // initialize variables to null
		img.mlx = mlx_init();
		img.map = ft_parsing(argv[1], &img); // for free (free_map)
		init_player_pos(&img); // init player position
		img.win = mlx_new_window(img.mlx, img.x * WIDTH, img.y * HEIGHT, \
		"*  * * Zero Gravity * *  *"); // open window
		set_img_info(&img); // init images
		check_img_set(&img);
		init_screen(&img); // print first scene
		mlx_hook(img.win, 2, 1L<<0, close_key, &img);
		mlx_hook(img.win, 17, 0, close_mouse, &img);
		mlx_loop(img.mlx);
		destroy_all(&img);
	}
	return (0);
}
