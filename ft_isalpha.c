#include "libft"
	
int	ft_isalpha(char *a)
{
	if ( *a >= 'a' && *a <='z' || *a >= 'A' && *a <='Z')
		return (1);
	return (0);
}
