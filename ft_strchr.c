#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned int i;
	char char_c;
	char *res;

	i = 0;
	char_c = (char) c;
	while(s[i] != char_c && s[i] )
		i++;
	if (s[i] == char_c )
	{
		res = (char *) s + i;
		return (res);
	}
	else
		return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strchr(char *s, int c, int offset)
{
	char		*str;

	if (!(str = strchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}

int				main_2(int argc, char *argv[])
{
	char		str2[] = "bonjour";
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		check_strchr(str2, 'b', 0);
	else if (arg == 2)
		check_strchr(str2, 'o', 1);
	else if (arg == 3)
		check_strchr(str2, 'j', 3);
	else if (arg == 4)
		check_strchr(str2, 's', 0);
	else if (arg == 5)
		check_strchr(str2, '\0', 7);
	else if (arg == 6)
	{
		char	str3[] = "";

		check_strchr(str3, '\0', 0);
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
 */
