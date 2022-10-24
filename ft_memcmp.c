//#include "libft.h"
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *uc_s1;
	unsigned char *uc_s2;

	uc_s1 = (unsigned char *) s1;
	uc_s2 = (unsigned char *) s2;

	while (n > 0 && *uc_s1 == *uc_s2)
	{
		uc_s1 ++;
		uc_s2 ++;
        n --;
	}
    return (*uc_s1 - *uc_s2);
}

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
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

int				main(int argc, const char *argv[])
{
	ft_print_result(memcpy("salut", "salut", 5));
	printf("\n");
	ft_print_result(memcpy("t\200", "t\0", 2));
	printf("\n");
	ft_print_result(memcpy("testss", "test", 5));
	printf("\n");
	ft_print_result(memcpy("test", "tEst", 4));
	printf("\n");
	ft_print_result(memcpy("", "test", 4));
	printf("\n");
	ft_print_result(memcpy("test", "", 4));
	printf("\n");
	ft_print_result(memcpy("abcdefghij", "abcdefgxyz", 7));
	printf("\n");
	ft_print_result(memcpy("abcdefgh", "abcdwxyz", 6));
	printf("\n");
	ft_print_result(memcpy("zyxbcdefgh", "abcdefgxyz", 0));
	return (0);
}
/*
0
1
1
1
-1
1
-1
-1
1
	 */
