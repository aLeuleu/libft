#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

static void	ft_print_result(int n)
{
	char	c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

/* int	main(int argc, const char *argv[])
{
	ft_print_result(ft_strlen("Hello !"));
	printf("\n");
	ft_print_result(ft_strlen("1"));
	printf("\n");
	ft_print_result(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n"));
	printf("\n");
	ft_print_result(ft_strlen(""));
	printf("\n");
	ft_print_result(ft_strlen("\n\n\f\r\t"));
	printf("\n");
	ft_print_result(ft_strlen("   "));
	return (0);
} */
/*
7
1
27
0
5
3
 */
