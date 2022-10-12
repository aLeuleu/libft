#include "libft.h"
#include <stdlib.h>

int	is_whitespace(char *c)
{
	if (*c == ' ' || *c == '/n' || *c == '/t')  
		return (1);
	else
		return (0);
}
char	*ft_strtrim(char const *s)
{
	char	*res;
	unsigned int	start;
	unsigned int	end;
	unsigned int	len_s;

	len_s = ft_strlen(s);
	start = 0;
	while(is_whitespace(s[start]))
	{
		start++;
	}
	end = len_s; 
	while (is_whitespace(s[end]))
	{
		end--;
	}
	res = ft_strnew(end - start);	
	if (!res)
		return NULL;
	if (start == 0 && end == len_s )
		return (s);
	else
		ft_strncpy(s[start], res, end-start);
		return (res);
	
}
