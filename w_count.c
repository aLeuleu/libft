#include "libft.h"
#include <stdlib.h>

int	w_count(const char *str, char sep)
{
	int	i;
	int	w_count;
	int	str_len;

	i = 0;
	w_count = 0;
	str_len = ft_strlen(str);
	while( i <= str_len)
	{
		if (str[i] != sep)
		{
			w_count++;
			while (str[i] != sep)
				i++;
		}
		i++;
	}
	return (w_count);
}
