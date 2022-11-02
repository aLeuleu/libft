#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void	ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int			main_2(int argc,int argv)
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = argv) == 1)
		ft_print_result(ft_strcmp("salut", "salut"));
	else if (arg == 2)
		ft_print_result(ft_strcmp("test", "testss"));
	else if (arg == 3)
		ft_print_result(ft_strcmp("testss", "test"));
	else if (arg == 4)
		ft_print_result(ft_strcmp("test", "tEst"));
	else if (arg == 5)
		ft_print_result(ft_strcmp("", "test"));
	else if (arg == 6)
		ft_print_result(ft_strcmp("test", ""));
	else if (arg == 7)
		ft_print_result(ft_strcmp("test\200", "test\0"));
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
0

Test 2 :
-1

Test 3 :
1

Test 4 :
1

Test 5 :
-1

Test 6 :
1

Test 7 :
-1

Test 8 :


 */
