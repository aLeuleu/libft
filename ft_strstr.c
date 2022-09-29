//#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	// parcours la chaine
	unsigned int i;

	i = 0;
	while (!is_needle_found(haystack[i], needle) && haystack[i] )
		i=++;
	if (is_needle_found(haystack[i], needle))
		return (haystack + i);
	else
		return (NULL));
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