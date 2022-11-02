#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2,size_t n)
{
	int i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i] && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
