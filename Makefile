# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchampou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 20:26:57 by cchampou          #+#    #+#              #
#    Updated: 2016/11/06 16:51:37 by cchampou         ###   ########.fr        #
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
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strstr.c		\
			ft_strnstr.c	\
			ft_strcmp.c		\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_putchar.c	\
			ft_putstr.c		\
			ft_memalloc.c	\
			ft_memdel.c		\
			ft_strnew.c		\
			ft_strdel.c		\
			ft_strclr.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strmap.c		\
			ft_strmapi.c	\
			ft_strequ.c		\
			ft_strnequ.c	\
			ft_strsub.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_strsplit.c	\
			ft_itoa.c		\
			ft_putendl.c

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
