#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

static void		check_strcat(char *dest, char *src, int len)
{
	if (dest != strcat(dest, src))
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
		dest[11] = 'a';
		check_strcat(dest, "lorem", 15);
	}
	else if (arg == 2)
		check_strcat(dest, "", 15);
	else if (arg == 3)
	{
		dest[0] = '\0';
		dest[11] = 'a';
		check_strcat(dest, "lorem ipsum", 15);
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

	return 0;
}

/*
rrrrrrlorem
rrrrrr
lorem ipsum
 */

/*
rrrrrrlorem
rrrrrr
lorem ipsum
 */
