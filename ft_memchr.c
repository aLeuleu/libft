//#include "libft.h"
#include <stddef.h>




void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char *uc_s;
	unsigned char uc_c;
       
	uc_c = (unsigned char) c;
	uc_s= (unsigned char *) s;
	i = 0;
	while ( uc_s[i] && uc_s[i] != uc_c && n > 0 )
	{
		i ++;
		n --;
	}
	if (uc_s[i] == uc_c )
		return (void *)(s+i);
	else
		return (NULL);
}
