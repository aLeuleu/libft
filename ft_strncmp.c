#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2,size_t n)
{
	while(*s1 == *s2 && *s1 && *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1-*s2);
}