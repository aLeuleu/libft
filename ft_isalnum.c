#include "libft.h"

int	ft_isalnum(int	a)
{
	if ( ft_is_digit(a) || ft_is_alpha(a) )
		return (1);
	return (0);
}
