# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pifourni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/20 10:11:48 by pifourni          #+#    #+#              #
#    Updated: 2025/11/04 09:47:40 by pifourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = cc
LIB =
CFLAGS = -Wall -Wextra -Werror -Iincludes 
SRC = ./ft_isalpha.c \
	  ./ft_isdigit.c \
	  ./ft_isalnum.c \
	  ./ft_isascii.c \
	  ./ft_isprint.c \
	  ./ft_strlen.c \
	  ./ft_memset.c \
	  ./ft_bzero.c \
	  ./main.c
OBJ = $(SRC:.c=.o)
NAME = libft.out#libft.a

all: $(NAME)
	
$(NAME): $(OBJ)
	$(CC) -o $(NAME) $+ $(LIB)
#	ar -rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
