#include "libft.h"

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while ( i < n )
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}


#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

static void		check_strncpy(char *dest, char *src, int n, int len)
{
	if (dest != ft_strncpy(dest, src, n))
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
	memset(dest, 0, 15);
	if ((arg = atoi(argv[1])) == 1)
	{
		memset(dest, 's', 13);
		check_strncpy(dest, "lorem", 6, len);
	}
	else if (arg == 2)
	{
		memset(dest, 's', 13);
		check_strncpy(dest, "lorem", 10, len);
	}
	else if (arg == 3)
	{
		memset(dest, 's', 13);
		check_strncpy(dest, "", 3, len);
	}
	else if (arg == 4)
	{
		memset(dest, 's', 13);
		check_strncpy(dest, "lorem ipsum", 3, len);
	}
	else if (arg == 5)
	{
		memset(dest, 's', 13);
		check_strncpy(dest, "lorem ipsum", 0, len);
	}
	else if (arg == 6)
	{
		memset(dest, 's', 5);
		check_strncpy(dest, "lorem ipsum", 10, len);
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

	char *argv6[] = {"caca","6"};
	main_2(2,argv6);
    printf("\n");
	return 0;
}
/*
loremsssssss
loremsss
ssssssssss
lorssssssssss
sssssssssssss
lorem ipsu
 */
/*
loremsssssss
loremsss
ssssssssss
lorssssssssss
sssssssssssss
lorem ipsu
*/
