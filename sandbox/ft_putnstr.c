#include <stddef.h>
#include <unistd.h>

void	ft_putnstr(char *s, size_t len)
{
	char nb1 = '/';
	char nb2 = '0';

	while (len-->0)
	if (*s == 0)
	{
		write(1, &nb1, 1);
		write(1, &nb2, 1);
		s++;
	}
	else
		write(1, s++, 1);
}
