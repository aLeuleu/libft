#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			size;
	unsigned int	i;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	res = ft_strnew(size);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
