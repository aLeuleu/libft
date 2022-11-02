#include "libft.h"
#include <stdlib.h>


char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;
	int				res;

	char_c = (char)c;
	res =-1;
	i = 0;

	if (char_c == '\0'){
		while (s[i])
			i++;
		return ((char *)s + i);
	}
	while (s[i])
	{
		if (s[i] == char_c)
			res = i;
		i++;
	}
	if (res == -1 )
		return (NULL);
	else
		return ((char *)s + res);
}

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

static void		check_strrchr(char *s, int c, int offset)
{
	char		*str;

	if (!(str = ft_strrchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
}

int				main_2(int argc, int argv)
{
	char		str2[] = "bonjour";
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = argv) == 1)
		check_strrchr(str2, 'b', 0);
	else if (arg == 2)
		check_strrchr(str2, 'o', 4);
	else if (arg == 3)
	{
		char	str3[]= "bonjourno";
		check_strrchr(str3, 'o', 8);
	}
	else if (arg == 4)
		check_strrchr(str2, 'j', 3);
	else if (arg == 5)
		check_strrchr(str2, 's', 0);
	else if (arg == 6)
		check_strrchr(str2, '\0', 7);
	else if (arg == 7)
	{
		char	str3[] = "";
		check_strrchr(str3, '\0', 0);
	}
	else if (arg == 8)
		check_strrchr(str2 + 2, 'b', 0);
	return (0);
}

int	main(int argc, char const *argv[])
{
	for (int i = 0; i < 9; i++)
	{
		printf("Test %d :\n", i);
		main_2(2, i);
		printf("\n");
		printf("\n");
	}
	return (0);
}
