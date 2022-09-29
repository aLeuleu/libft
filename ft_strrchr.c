\\#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
	unsigned int i;
	char char_c;

	char_c = (char) c;
	while(s[i] != char_c && s[i] )
	{
		i++;
	}
	if (s[i] != char_c )
		{
            if (ft_strchr(s+i) != NULL)
            {
                return (ft_strrchr(s+i));
            }
        }
	else
		return (NULL);
}