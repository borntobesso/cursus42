# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 17:08:37 by sojung            #+#    #+#              #
#    Updated: 2022/01/16 17:56:39 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c ft_ps.c ft_r.c ft_rr.c ft_init.c arg_utils.c utils.c \
mov_utils.c pivot_utils.c action.c little_sort.c big_sort.c 

OBJS = $(SRCS:.c=.o)

HEADER = ./

CC = clang

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -o $@ -I $(HEADER) -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
