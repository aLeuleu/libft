#include "libft.h"

char	*ft_strlcpy(char *dest, char *src, size_t len)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
