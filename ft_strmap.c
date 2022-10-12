#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	size_t	size;
	unsigned int	i;

	i = 0;
	size = 0;

	while (s[size])
		size++;
	res = ft_strnew(size);
       while (s[i])
       {
	       res[i] = f(s[i]);
	       i++;
       }
	return (res);
}
