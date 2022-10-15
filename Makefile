NAME = libft

SRC = ft_putchar.c

all	: $(NAME)

$(NAME):
	gcc -c -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

