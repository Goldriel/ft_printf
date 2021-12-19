LIBFT = linft.a
NAME = libftprintf.a
CC = clang
FLAGS = -Wall -Werror -Wextra
SRC	=	ft_printf.c\
		print_char.c\
		print_hex.c\
		print_num.c\
		utoa_base.c
OBJ = $(SRC: .c=.o)

%.o:	%.c ft_printf.h
			$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
			$(MAKE) -C ./libft
			cp ./libft/$(LIBFT) $(NAME)
			ar -rc $(NAME) $(OBJ)

clean: libftclean
			re -f $(OBJ)

fclean: clean libftfclean
			rm -f $(NAME)

libftclean:
			$(MAKE) -c ./libft clean

libftfclean:
			$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re