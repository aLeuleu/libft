#include <stddef.h>
#include <string.h>
#include "../libft.h"
#include <stdio.h>


int	main(int argc, char **argv)
{
	int		i;
	char	choice;
	char	params1[] = {'b', '0', '?', '@', '!', 0};
	int		params2[] = {17, 13, 9, 5, 2, 1, 0};
	int		params3[] = {6, 1, 0, 13, 14};
	char	str[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123";
	void	(*f)(void *, size_t );

	choice = '1';
	if(argc > 1)
	{
		choice = *argv[1];
	}

	if (choice == '1')
	{
		f = &ft_bzero;
	}
	else if (choice == '2')
	{
		f = &bzero;
	}
	else
	{
		printf("test error");
		return (-1);
	}
	i = 0;
	while (params1[i] != 0)
	{
		f(str + params2[i], params3[i]);
		ft_putnstr(str,50);
		printf("\r");
		fflush(stdout);
		i++;
	}
	return (0);
}
