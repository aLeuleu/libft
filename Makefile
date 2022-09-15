NAME = libft

SRC = ft_memset.c

TEST_FOLDER = ./tests

TEST_MEMSET:
	gcc ft_memset.c -c
	gcc $(TEST_FOLDER)/memset.c ft_memset.o
	./a.out
	rm a.out
	rm ft_memset.o

TESTS:	TEST_MEMSET 

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
