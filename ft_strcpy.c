#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static void		check_strcpy(char *dest, char *src, int len)
{
	if (dest != ft_strcpy(dest, src))
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
	memset(dest, 'f', 9);
	if ((arg = atoi(argv[1])) == 1)
		check_strcpy(dest, "lorem", len);
	else if (arg == 2)
		check_strcpy(dest, "lorem ipsum", len);
	else if (arg == 3)
		check_strcpy(dest, "", len);
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
loremfff
lorem ipsum
ffffffff
 */
