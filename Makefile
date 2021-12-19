LIBFT = libft.a
NAME = libftprintf.a
CC = clang
FLAGS = -Wall -Werror -Wextra
SRC	=	ft_printf.c\
		print_char.c\
		print_hex.c\
		print_num.c\
		utoa_base.c
OBJ = $(patsubst %.c, %.o, $(SRC))

%.o:	%.c
			$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
			$(MAKE) -C ./libft
			cp ./libft/$(LIBFT) $(NAME)
			ar -rc $(NAME) $(OBJ)

clean: libftclean
			rm -f $(OBJ)

fclean: clean libftfclean
			rm -f $(NAME)

libftclean:
			$(MAKE) -C ./libft clean

libftfclean:
			$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re