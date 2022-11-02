#include "libft.h"

void ft_putendl(char const *s)
{
    char    c;

	ft_putstr(s);
    c = '/n';
    write(1,&c,1);
}
