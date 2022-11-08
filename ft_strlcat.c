#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(dst[j] && j < size)
		j++;
	while (src[i] && ((j + i + 1) < size) )
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != size)
		dst[j + i] = '\0';
	return (j + ft_strlen((char *)src));

}
