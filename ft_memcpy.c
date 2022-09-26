#include "libft.h"
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
