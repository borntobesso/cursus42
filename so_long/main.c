/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:30:46 by sojung            #+#    #+#             */
/*   Updated: 2022/01/21 17:33:13 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	void	*mlx_ptr;
	void	*mlx_win;
	t_data	img;
	int		i;

	mlx_ptr = mlx_init();
	mlx_win = mlx_new_window(mlx_ptr, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx_ptr, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, \
	&img.line_length, &img.endian);
	i = 5;
	while (i <= 150)
	{
		my_mlx_pixel_put(&img, i, 5, 0x00ff00ff);
		my_mlx_pixel_put(&img, i, 150, 0x00ff00ff);
		my_mlx_pixel_put(&img, 5, i, 0x00ff00ff);
		my_mlx_pixel_put(&img, 150, i, 0x00ff00ff);
		i++;
	}
//	my_mlx_pixel_put(&img, 5, 5, 0x00FF00FF);
	mlx_put_image_to_window(mlx_ptr, mlx_win, img.img, 0, 0);
	mlx_loop(mlx_ptr);
	mlx_destroy_display(mlx_ptr);
	free(mlx_ptr);
}
