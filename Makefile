NAME = libftprintf.a

SRC = ft_putchar.c ft_putstr.c ft_printf.c ft_print_base.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $<
	ar -rc $(NAME) $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
