#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	choice;
	int		i;

	char	params[] = {'a', 'b', '0', '?',  '@', '!',0};
	if(argc > 0)
    {
        choice = *argv[1];
    }
    
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
