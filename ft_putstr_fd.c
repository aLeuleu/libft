#include "libft.h"

void	ft_putstr_fd(char const *s,int fd)
{
	while(*s)
		write(1,s++,fd);
}