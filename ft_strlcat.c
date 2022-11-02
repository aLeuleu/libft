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
#include <stddef.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int	dest_len;

	i = 0;
	j = 0;
	while(dst[j] && j < size)
		j++;
	while (src[i] && ((j + i + 1) < size) )
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != size)
		dst[j + i] = '\0';
	return (j + ft_strlen((char *)src));

}

/*
dst et src doivent etre NULL terminated ( voir man)

strlcat renvoi la longueur totale de la strings qu'il a tenté de créer.
En comptant le NB ? non
si size negatif :
	dst est NT ✅
	src est NT ✅
	renvois
strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result
(as long as size is larger than 0 or, in the case of strlcat(),
as long as there is at least one byte free in dst).
 */
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>

static void		ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

static void		check_strlcat(char *dest, char *src, int size, int dest_len)
{
	ft_print_result(strlcat(dest, src, size));
	write(1, "\n", 1);
	write(1, dest, dest_len);
	free(dest);
}

int				main_2(int argc, char *argv[])
{
	char	*dest;
	int		arg;
	int		dest_len;

	alarm(5);
	dest_len = 15;
	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
		return (0);
	memset(dest, 0, dest_len);
	memset(dest, 'r', 6);
	if ((arg = atoi(argv[1])) == 1)
	{
		dest[11] = 'a';
		check_strlcat(dest, "lorem", 15, dest_len);
	}
	else if (arg == 2)
		check_strlcat(dest, "", 15, dest_len);
	else if (arg == 3)
	{
		dest[0] = '\0';
		dest[11] = 'a';
		check_strlcat(dest, "lorem ipsum", 15, dest_len);
	}
	else if (arg == 4)
	{
		dest[14] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	}
	else if (arg == 5)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 0, dest_len);
	}
	else if (arg == 6)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 1, dest_len);
	}
	else if (arg == 7)
	{
		memset(dest, 'r', 15);
		check_strlcat(dest, "lorem ipsum dolor sit amet", 5, dest_len);
	}
	else if (arg == 8)
	{
		dest[10] = 'a';
		check_strlcat(dest, "lorem ipsum dolor sit amet", 6, dest_len);
	}
	else if (arg == 9)
	{
		memset(dest, 'r', 14);
		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
	}
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

	char *argv7[] = {"caca","7"};
	main_2(2,argv7);
	printf("\n");

	char *argv8[] = {"caca","8"};
	main_2(2,argv8);
	printf("\n");

	char *argv9[] = {"caca","9"};
	main_2(2,argv9);
	printf("\n");




	return 0;
}

/*


11
rrrrrrlorem
6
rrrrrr
11
lorem ipsum
32
rrrrrrlorem ip
26
rrrrrra
27
rrrrrra
31
rrrrrrrrrrrrrrr
32
rrrrrra
40
rrrrrrrrrrrrrr
 */
