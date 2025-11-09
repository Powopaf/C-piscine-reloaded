# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 00:39:50 by pifourni          #+#    #+#              #
#    Updated: 2025/11/09 13:17:58 by pifourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
.PHONY: all clean fclean re

CC = cc
LIB =
CFLAGS = -g -Wall -Wextra -Werror -Iincludes 
SRC = ./ft_isalpha.c \
	  ./ft_isdigit.c \
	  ./ft_isalnum.c \
	  ./ft_isascii.c \
	  ./ft_isprint.c \
	  ./ft_strlen.c \
	  ./ft_memset.c \
	  ./ft_bzero.c \
	  ./ft_memcpy.c \
	  ./ft_memmove.c \
	  ./ft_strlcpy.c \
	  ./ft_strlcat.c \
	  ./ft_toupper.c \
	  ./ft_tolower.c \
	  ./ft_strchr.c \
	  ./ft_strrchr.c \
	  ./ft_strncmp.c \
	  ./ft_memchr.c \
	  ./ft_memcmp.c \
	  ./ft_strnstr.c \
	  ./ft_atoi.c \
	  ./ft_calloc.c \
	  ./ft_strdup.c \
	  ./ft_substr.c \
	  ./ft_strjoin.c \
	  ./ft_strtrim.c \
	  ./ft_split.c \
	  ./ft_itoa.c \
	  ./ft_strmapi.c \
	  ./ft_striteri.c \
	  ./ft_putchar_fd.c \
	  ./ft_putstr_fd.c \
	  ./ft_putendl_fd.c \
	  ./ft_putnbr_fd.c \
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
