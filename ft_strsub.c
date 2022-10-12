#include <stdlib.h>
#include <stddef.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{	
	char	*res;

	res = ft_strnew(len+1);
	return (ft_strncpy(s[start], res, len+1);
	
}
