# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/21 13:13:23 by sojung            #+#    #+#              #
#    Updated: 2022/01/26 18:13:14 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

BONUS = so_long_b

SRC = main.c get_next_line.c get_next_line_utils.c parsing.c ft_split.c \


BSRC = main_bonus.c get_next_line.c get_next_line_utils.c parsing.c ft_split.c \


OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

HEADER = ./

CC = clang

FLAGS = -Wall -Wextra -Werror -I/usr/include -Iminilibx_linux -O3

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -Lminilibx-linux -lmlx_Linux -L/usr/lib -Iminilibx_linux \
	-lXext -lX11 -lm -lz -o $(NAME)

bonus : $(BOBJ)
	$(CC) $(BOBJ) -Lminilibx-linux -lmlx_Linux -L/usr/lib -Iminilibx_linux \
	-lXext -lX11 -lm -lz -o $(BONUS)

%.o : %.c so_long.h
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

clean :
	rm -f $(OBJ) $(BOBJ)

fclean : clean
	rm -f $(NAME) $(BONUS)

re : fclean all
