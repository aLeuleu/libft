# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 20:55:17 by alevra            #+#    #+#              #
#    Updated: 2022/12/12 21:16:02 by alevra           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c 		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strlen.c			\
		ft_isalpha.c 		\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_atoi.c			\
		ft_strdup.c			\
		ft_strjoin.c 		\
		ft_strtrim.c		\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_strlcpy.c		\
		ft_calloc.c			\
		ft_substr.c			\
		ft_split.c			\
		ft_striteri.c		\
		ft_putstr.c			\
		ft_putnbr.c			\
		ft_putnbr_base.c	\
		ft_put_u_nbr_base.c	\
		ft_putchar.c		\
		ft_put_u_nbr.c		\
		ft_itoa_printf.c	\
		ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstadd_back.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstclear.c		\
		ft_lstmap.c			\
		ft_printf.c

OBJ = $(SRC:.c=.o)

all	: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o : %.c libft.h
	gcc -c -Wall -Wextra -Werror $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	${MAKE} all

.PHONY: all clean fclean re
