NAME = libft.a

SRC =	ft_memset.c \
		ft_putchar.c \
		ft_bzero.c

all	: $(NAME)

$(NAME):
	ar -rcs $(NAME) $(SRC)
clean:
	rm -f *make.o

fclean: clean
	rm -f $(NAME)

re: fclean all

