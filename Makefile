# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchampou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 20:26:57 by cchampou          #+#    #+#              #
#    Updated: 2016/11/06 04:20:51 by cchampou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_FILES = 	ft_strlen.c		\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_strcat.c		\
			ft_strncat.c	\
			ft_strlcat.c	\
			ft_strdup.c		\
			ft_strcpy.c		\
			ft_strncpy.c	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c

O_FILES = $(C_FILES:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(C_FILES) -Ilibft.h
	ar rc $(NAME) $(O_FILES)

clean:
	rm -rf $(O_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all
