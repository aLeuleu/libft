#include "libft"

void ft_putendl_fd(char const *s, int fd)
{
    char    c;

	ft_putstr_fd(s,fd);
    c = '/n';
    write(1,&c,fd);
}
