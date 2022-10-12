#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	unsigned int	len_s1;
	unsigned int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);

	res = ft_strnew(len_s1 + len_s2);
	ft_strcpy(s1, res);
	ft_strcpy(s2, res + len_s1);
	return (res);
}
