#include "libft.h"
#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destc;
	const char	*srcc;
	size_t		i;

	srcc = (char *)src;
	destc = (char *)dest;
	i = 0;
	while (srcc[i] && i < n)
	{
		destc[i] = srcc[i];
		i++;
		if (srcc[i - 1] == c)
			break ;
	}
	if (srcc[--i] == c)
	{
		i++;
		return (dest + i);
	}
	return (NULL);
}

