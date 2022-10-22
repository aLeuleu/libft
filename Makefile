NAME = libft.a

SRC =	ft_memset.c \
		ft_putchar.c \
		ft_bzero.c

OBJ = $(SRC:.c=.o)

all	: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar -rcs $(NAME) $(OBJ)
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

test: fclean all
	gcc -c main.c
	gcc -o main main.o -L. libft.a
	echo
	./main
