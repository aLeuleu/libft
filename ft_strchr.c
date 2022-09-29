\\#include "libft.h"


char *ft_strchr(const char *s, int c)
{
	unsigned int i;
	char char_c;

	char_c = (char) c;
	while(s[i] != char_c && s[i] )
	{
		i++;
	}
	if (s[i] != char_c )
		return (s+i);
	else
		return (NULL);
}