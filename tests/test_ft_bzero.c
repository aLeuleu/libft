#include <stddef.h>
#include <string.h>
#include "../libft.h"
#include <stdio.h>


int	main(int argc, char **argv)
{
	char	choice;
	int		i;
	char params1[] = {'b', '0', '?', '@', '!', 0};
	int params2[] = {17, 13, 9, 5, 2, 1, 0};
	int params3[] = {6, 1, 0, 13, 17};
	char str[100] = "Aticleworld is a programming Blog.Aticleworld is a programming Blog.";
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
		printf("str : \"%s\",\rparams : %d\r", str, params3[i]);
		f(str + params2[i], params3[i]);
		printf("-->%s\r\r", str);
		//ft_print_memory(str, 50);
		printf("\n");

		i++;
	}

	return (0);
}
