#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	choice;
	int		i;

	char	params[] = {'a', 'b', '0', '?',  '@', '!',0};
	choice = *argv[1];
	if (choice == '1')
	{
		i = 0;
		while (params[i] != 0)
		{
			ft_putchar(params[i]);
			i++;
		}
	}
	else if (choice == '2')
	{
		i = 0;
		while (params[i] != 0)
		{
			putchar(params[i]);
			i++;
		}
	}
	else
	{
		printf("test error");
		return (-1);
	}
	return (0);
}

/*
1) compiler et executer ft_ asdf
	compiler test()
	executer test(ft_asdf)
2) compiler et executer asdf
	executer test(asdf)
3) faire la diff

*/
