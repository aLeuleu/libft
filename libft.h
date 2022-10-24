#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count);

void	ft_bzero(void *s, size_t n);
void	ft_putnstr(char *s, size_t len);
void	ft_putstr(char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

/*
ft_memmove
ft_memchr
ft_memcmp */
int		ft_strlen(char *s);
char	*ft_strdup(char *str);

/*
ft_strcpy
ft_strncpy
ft_strcat
ft_strncat
ft_strchr
ft_strrchr
ft_strstr
ft_strnstr
ft_strcmp
ft_strncmp
ft_atoi
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_toupper
ft_tolower
ft_memalloc
ft_memdel
ft_strnew
ft_strdel
ft_strclr
ft_striter
ft_striteri
ft_strmap
ft_strmapi
ft_strequ
ft_strnequ
ft_strsub
ft_strjoin
ft_strtrim
ft_putstr
ft_strsplit
ft_itoa */
void    ft_putchar(char);
/* ft_putendl
ft_putnbr
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd */
#endif
