#include "libft.h"

char  *ft_strncat(char *dest, char *src, int n)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && n-- > 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}


#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

static void		check_strncat(char *dest, char *src, int n, int len)
{
	if (dest != strncat(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, len);
}

int		main_2(int argc, char *argv[])
{
	char	*dest;
	int		arg;
	int		len;

	alarm(5);
	len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * len)) || argc == 1)
		return (0);
	memset(dest, 0, len);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		dest[8] = 'a';
		check_strncat(dest, "lorem", 2, len);
	}
	else if (arg == 2)
	{
		dest[11] = 'a';
		check_strncat(dest, "lorem", 9, len);
	}
	else if (arg == 3)
		check_strncat(dest, "", 3, len);
	else if (arg == 4)
		check_strncat(dest, "lorem ipsum", 0, len);
	else if (arg == 5)
	{
		dest[0] = '\0';
		dest[10] = 'a';
		check_strncat(dest, "lorem ipsum", 10, len);
	}
	free(dest);
	return (0);
}

int main(int argc, char const *argv[])
{

	char *argv1[] = {"caca","1"};
	main_2(2,argv1);
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

	return 0;
}
/*
rrrrrrlo
rrrrrrlorem
rrrrrr
rrrrrr
lorem ipsu

rrrrrrlo
rrrrrrlorem
rrrrrr
rrrrrr
lorem ipsu
 */
