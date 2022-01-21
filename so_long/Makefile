# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 13:13:23 by sojung            #+#    #+#              #
#    Updated: 2022/01/21 15:42:18 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = main.c mlx_utils.c

OBJ = $(SRC:.c=.o)

HEADER = ./

CC = clang

FLAGS = -Wall -Wextra -Werror -I/usr/include -Iminilibx_linux -O3

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -Lminilibx-linux -lmlx_Linux -L/usr/lib -Iminilibx_linux \
	-lXext -lX11 -lm -lz -o $(NAME)

%.o : %.c so_long.h
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
