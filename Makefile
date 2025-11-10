# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/06 00:39:50 by pifourni          #+#    #+#              #
#    Updated: 2025/11/10 15:05:39 by pifourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
.PHONY: all clean fclean re bonus

CC = cc
LIB =
CFLAGS = -Wall -Wextra -Werror -I. -Iincludes 
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
	  ./ft_putnbr_fd.c

SRC_B = ./ft_lstnew_bonus.c \
		./ft_lstadd_front_bonus.c \
		./ft_lstsize_bonus.c \
		./ft_lstlast_bonus.c \
		./ft_lstadd_back_bonus.c \
		./ft_lstdelone_bonus.c \
		./ft_lstclear_bonus.c \
		./ft_lstiter_bonus.c \
		./ft_lstmap_bonus.c \

OBJ = $(SRC:.c=.o)
OBJ_B = $(SRC_B:.c=.o)
NAME = libft.a

all: $(NAME)
	
bonus: $(OBJ) $(OBJ_B)
	ar -rsc $(NAME) $(OBJ) $(OBJ_B)

$(NAME): $(OBJ)
	ar -rsc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm $(OBJ)
	rm -f $(OBJ_B)

fclean: clean
	rm $(NAME)

re: fclean all
