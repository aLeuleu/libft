#include <stddef.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i] && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}

/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int				main_2(int argc, char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = argv) == 1)
		ft_print_result(ft_strncmp("salut", "salut", 5));
	else if (arg == 2)
		ft_print_result(ft_strncmp("test", "testss", 7));
	else if (arg == 3)
		ft_print_result(ft_strncmp("testss", "test", 7));
	else if (arg == 4)
		ft_print_result(ft_strncmp("test", "tEst", 4));
	else if (arg == 5)
		ft_print_result(ft_strncmp("", "test", 4));
	else if (arg == 6)
		ft_print_result(ft_strncmp("test", "", 4));
	else if (arg == 7)
		ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	else if (arg == 8)
		ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	else if (arg == 9)
		ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	else if (arg == 10)
		ft_print_result(ft_strncmp("abcdefgh", "", 0));
	else if (arg == 11)
		ft_print_result(ft_strncmp("test\200", "test\0", 6));
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
