#include "libft.h"
#include <string.h>

int	is_needle_found(const char *haystack, const char *needle);

char *ft_strnstr(const char *haystack, const char *needle,size_t n)
{
	unsigned int	i;
	int				needle_len;

	needle_len = ft_strlen((char *)needle);
	if (n < needle_len)
		n = 0;
	else
		n -= needle_len;

	i = 0;
	while ( n > 0 && haystack[i] && !is_needle_found(haystack + i, needle))
	{
		i++;
		n--;
	}
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
/*
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

static void		check_strnstr(char *big, char *little, int len)
{
	const char *str;

	if (!(str = ft_strnstr(big, little, len)))
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
		check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	else if (arg == 2)
		check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	else if (arg == 3)
		check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	else if (arg == 4)
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	else if (arg == 5)
		check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	else if (arg == 6)
		check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	else if (arg == 7)
		check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	else if (arg == 8)
		check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	else if (arg == 9)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	else if (arg == 10)
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	return (0);
}

int	main(int argc, char const *argv[])
{
	for (int i = 1; i < 11; i++)
	{
		printf("Test %d :\n", i);
		main_2(2, i);
		printf("\n");
		printf("\n");
	}
	return (0);
}
 */

/*

Test 1 :
lorem ipsum dolor sit amet

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

Test 8 :
NULL

Test 9 :
NULL

Test 10 :
NULL
 */
