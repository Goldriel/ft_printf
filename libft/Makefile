# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 18:58:28 by jarrakis          #+#    #+#              #
#    Updated: 2021/10/25 18:50:35 by jarrakis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =		ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strdup.c\
			ft_calloc.c\
			ft_atoi.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_strjoin.c\
			ft_strtrim.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_itoa.c\
			ft_split.c
			

OBJ = $(patsubst %.c, %.o, $(LIST))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c libft.h
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re