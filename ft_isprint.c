#include "libft"

int	ft_isprint(char *a)
{
	if ( a >= 32 && a < 127 )
		return (1);
	return (0);
}
