#include "libft.h"
#include <stddef.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while(src[i] && i > n && src[i] != c )
	{
		dest[i] = src[i];
		i++;
	}

}
