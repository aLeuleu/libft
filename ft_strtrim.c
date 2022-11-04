#include "libft.h"


char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc( sizeof(char) * size);
	if (!res)
		return (NULL);
	while (size > 0)
		res[size--] = 0;
	return (res);
}

int	contains_charset(char c, char const *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
		if (c == charset[i++])
			return (1);
	return (0);
}
// TODO adapter strtim pour fonctionner avec un set
char	*ft_strtrim(char const *s, char const *charset)
{
	char			*res;
	int				start;
	int				end;
	unsigned int	len_s;

	len_s = ft_strlen(s);
	start = 0;
	while (contains_charset(s[start], charset ))
		start++;
	end = len_s;
	while (contains_charset(s[end], charset))
		end--;
	if (!(res = ft_strnew(end - start)))
		return (NULL);
	if (start == 0 && end == len_s)
		return ((char *)s);
	else
		return (ft_strncpy(res, &(s[start]), end - start));
}

