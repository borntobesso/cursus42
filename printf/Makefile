# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sojung <sojung@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 18:36:13 by sojung            #+#    #+#              #
#    Updated: 2021/12/07 19:01:31 by sojung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 

OBJS = $(SRCS:.c=.o)

LIBFT = libft.a

HEADER = ./

CC = clang

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT)
	ar rc $@ $^

%.o : %.c libftprintf.h
	$(CC) $(CFLAGS) -o $@ -I $(HEADER) -c $<

$(LIBFT) : 

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
