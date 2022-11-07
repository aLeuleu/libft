NAME = libft.a

SRC =	ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_strdup.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_strlcpy.c	\
		ft_calloc.c		\
		ft_substr.c		\
		ft_split.c		\
		ft_striteri.c	\


BONUS_SRC =	ft_lstnew.c		\
		ft_lstadd_front.c	\


OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

all	: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar -rcs $(NAME) $(OBJ)


bonus:
	gcc -c -Wall -Wextra -Werror $(BONUS_SRC)
	ar -rcs $(NAME) $(BONUS_OBJ)


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

.PHONY: bonus all
