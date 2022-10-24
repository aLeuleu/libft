#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *dest_cpy;
	char *src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	if (dest == src)
		return (dest);
	if (src_cpy < dest_cpy)
	{
		while (len--)
			*(dest_cpy + len) = *(src_cpy + len);
		return (dest);
	}
	else
	{
		while (len--)
			*dest_cpy++ = *src_cpy++;
		return (dest);
	}

}

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

static void		check_memmove(void *dest, void *src, int n)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
}

int				main_2(int argc, char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_memmove(dest, "consectetur", 5);
	else if (arg == 2)
		check_memmove(dest, "con\0sec\0\0te\0tur", 10);
	else if (arg == 3)
		check_memmove(dest, src, 8);
	else if (arg == 4)
		check_memmove(src, dest, 8);
	else if (arg == 5)
		check_memmove(src, dest, 0);
	return (0);
}

int				main()
{
	char *argv[] = {"caca","1"};
	main_2(2,argv);
	printf("\n");
	char *argv2[] = {"caca","2"};
	main_2(2,argv2);
	printf("\n");

	char *argv3[] = {"caca","3"};
	main_2(2,argv3);
	printf("\n");

	char *argv4[] = {"caca","4"};
	main_2(2,argv4);
	printf("\n");

	char *argv5[] = {"caca","5"};
	main_2(2,argv5);
	printf("\n");

	return (0);
}
/*
conseipsum dolor sit a
consect dolor sit a
lorem ipum dolor sit a
orem ipssum dolor sit
lorem ipsum dolor sit
 */
