//#include "libft.h"

int	is_needle_found(const char *haystack, const char *needle);

char *ft_strnstr(const char *haystack, const char *needle,size_t n)
{
	unsigned int i;

	i = 0;
	while (!is_needle_found(haystack[i], needle) && haystack[i] && n > 0)
		i=++;
        n--;
	if (is_needle_found(haystack[i], needle))
		return (haystack + i);
	else
		return (NULL);
}

int	is_needle_found(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (haystack[i] == needle [j]) && haystack[i] && needle [j])
	{
		i++;
		j++;
	}
	if (needle[j] == 0)
		return (1);
	else
		return (0);
}