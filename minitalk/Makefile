# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 16:41:52 by sojung            #+#    #+#              #
#    Updated: 2022/02/16 16:56:48 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server

CLIENT = client

SSRC = ./src/server.c ./src/ft_printf.c ./src/ft_printf_utils.c

CSRC = ./src/client.c ./src/ft_printf.c ./src/ft_printf_utils.c

SOBJ = ./src/server.o

COBJ = ./src/client.o

NAME = $(SERVER) $(CLIENT)

CC = gcc

FLAGS = -Wall -Wextra -Werror

INCLUDE = ./include

all = $(NAME)

$(SOBJ) : ./include/minitalk.h
	$(CC) $(FLAGS) -c $(SSRC) -o $@

$(COBJ) : ./include/minitalk.h
	$(CC) $(FLAGS) -c $(CSRC) -o $@

$(NAME) : $(SERVER) $(CLIENT)

$(SERVER) : $(SOBJ)
	$(CC) $(FLAGS) $^ -o $@

$(CLIENT) : $(COBJ)
	$(CC) $(FLAGS) $^ -o $@

clean :
	rm -f $(SOBJ) $(COBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
