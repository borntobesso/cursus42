/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:51:40 by sojung            #+#    #+#             */
/*   Updated: 2022/02/01 14:39:15 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/*
/			|HEADERS|
*/

# include <stdlib.h>
# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>

/*
/			|STRUCTURES|
*/

typedef struct	s_img {
	void	*mlx;
	void	*win;
	int		x;
	int		y;
	char	**map;
	void	*img_0;
	void	*img_1;
	void	*img_C;
	void	*img_E;
	void	*img_P_S;
	void	*img_P_W;
	void	*img_P_A;
	void	*img_P_D;
/*
	void	*img_C1;
	void	*img_C2;
	void	*img_C3;
	void	*img_C4;
	void	*img_C5;
	void	*img_C6;
	void	*img_C7;
	void	*img_C8;
	void	*img_B;
*/
	int		collect;
	int		move;
	int		pos_x;
	int		pos_y;
}	t_img;

/*
/			|MACROS|
*/

# define BUFFER_SIZE 10
# define WIDTH 64
# define HEIGHT 64

# define NORMAL "\033[0m"
# define RED "\033[0;31m"
# define CYAN "\033[0;36m"
# define YELLOW "\033[0;33m"
# define GREEN "\033[0;32m"

/*
/			|INIT FUCTIONS|
*/

void	ft_init_img(t_img *img);
void	init_player_pos(t_img *img);

/*
/			|GET_NEXT_LINE FUNCTIONS|
*/

char	*get_next_line(int fd);
int		ft_chr_newline(char *buf);
char	*ft_put_line(char *buf);
char	*ft_return_left(char *buf, int index_r);
int		ft_strlen(char *s);
char	*ft_strjoin(char *left, char *buf, int flag);
char	*ft_strdup(char *s);
char	*ft_clean(char **left, char *buf);
char	*ft_joinleft(char **left, int fd);

/*
/			|SPLIT FUNCTIONS|
*/

void	free_all_split(char *s, char **res, t_img *img, char *msg);
int		line_count(char *s, char c);
char	*line_malloc(char *s, t_img *img, char *map, char **res);
char	**ft_split(char *s, char c, t_img *img);

/*
/			|PARSING FUNCTIONS|
*/

char	*read_map(char *map);
char	**ft_parsing(char *file, t_img *img);

/*
/			|VALID MAP FUNCTIONS|
*/

int		check_first_wall(char *map);
int		check_last_wall(char *map);
int		check_vertical_wall(char *map, int index_n);
int		check_sprite(t_img *img, char *map);
int		check_map(t_img *img, char *map);

/*
/			|IMAGE FUNCTIONS|
*/

void	check_img_set(t_img *img);
void	set_img_info(t_img *img);
void	init_screen(t_img *img);

void	put_img_0(t_img *img, int x, int y);
void	put_img_1(t_img *img, int x, int y);
void	put_img_C(t_img *img, int x, int y);
void	put_img_E(t_img *img, int x, int y);
void	put_img_P_S(t_img *img, int x, int y);
void	put_img_P_W(t_img *img, int x, int y);
void	put_img_P_A(t_img *img, int x, int y);
void	put_img_P_D(t_img *img, int x, int y);

void	put_img_C1(t_img *img, int x, int y);
void	put_img_C2(t_img *img, int x, int y);
void	put_img_C3(t_img *img, int x, int y);
void	put_img_C4(t_img *img, int x, int y);
void	put_img_C5(t_img *img, int x, int y);
void	put_img_C6(t_img *img, int x, int y);
void	put_img_C7(t_img *img, int x, int y);
void	put_img_C8(t_img *img, int x, int y);
void	put_img_B(t_img *img, int x, int y);

/*
/			|MAP UPDATING FUNCTIONS|
*/

void	map_up(t_img *img);
void	map_down(t_img *img);
void	map_left(t_img *img);
void	map_right(t_img *img);

/*
/			|FINISHING FUNCTIONS|
*/

void	destroy_img(t_img *img);
void	destroy_mlx(t_img *img);
void	ft_error(t_img *img, char *msg, int flag);
void	free_map(t_img *img);
void	destroy_all(t_img *img);
void	fin_game(t_img *img);

/*
/			|BONUS FUNCTIONS|
*/

void	destroy_img_b(t_img *img);
void	destroy_img_b_2(t_img *img);
void	ft_error_b(t_img *img, char *msg, int flag);
void	check_img_set_b(t_img *img);
void	set_img_info_b(t_img *img);
void	set_img_info_b_2(t_img *img);
int		close_key_b(int keycode, t_img *img);
int		close_mouse_b(t_img *img);

/*
/			|HOOK FUNCTIONS|
*/
//void	my_mlx_pixel_put(t_img *data, int x, int y, int color);
int		close_key(int keycode, t_img *img);
int		close_mouse(t_img *img);
void	prt_msg(t_img *img);


#endif
