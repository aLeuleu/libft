#include "libft"
	
int	ft_isalnum(char *a)
{
	if ( is_digit(*a) || is_alpha(*a) )
		return (1);
	return (0);
}
