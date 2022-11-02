#include "libft.h"

int	is_needle_found(const char *haystack, const char *needle);

char *ft_strstr(const char *haystack, const char *needle)
{
	unsigned int i;

	i = 0;

	while (!is_needle_found(haystack + i, needle) && haystack[i] )
		i++;
	if (is_needle_found(haystack + i, needle))
		return ((char *)haystack + i);
	else
		return (NULL);
}


int	is_needle_found(const char *haystack, const char *needle)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while ((haystack[i] == needle [j]) && haystack[i] && needle [j])
	{
		i++;
		j++;
	}
	if (needle[j] == 0)
		return (1);
	else
		return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strstr(char *haystack, char *needle)
{
	const char	*str;

	if (!(str = ft_strstr(haystack, needle)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int				main_2(int argc, int argv)
{
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = argv) == 1)
		check_strstr("lorem ipsum dolor sit amet", "lorem");
	else if (arg == 2)
		check_strstr("lorem ipsum dolor sit amet", "ipsum");
	else if (arg == 3)
		check_strstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum");
	else if (arg == 4)
		check_strstr("lorem ipsum dolor sit amet", "");
	else if (arg == 5)
		check_strstr("lorem ipsum dolor sit amet", "ipsumm");
	else if (arg == 6)
		check_strstr("lorem ipsum dolor sit amet", "dol");
	else if (arg == 7)
		check_strstr("lorem ipsum dolor sit amet", "consectetur");
	return (0);
}

int	main(int argc, char const *argv[])
{
	for (int i = 1; i < 8; i++)
	{
		printf("Test %d :\n", i);
		main_2(2, i);
		printf("\n");
		printf("\n");
	}
	return (0);
}

/*
Test 1 :
sit amet

Test 2 :
ipsum dolor sit amet

Test 3 :
ipsum dolor sit lorem ipsum dolor

Test 4 :
lorem ipsum dolor sit amet

Test 5 :
NULL

Test 6 :
dolor sit amet

Test 7 :
NULL
 */
