
#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	choice;
	int		i;

	char params1[] = {'b', '0', '?', '@', '!', 0};
	int params2[] = {2, 5, 9, 13, 17};
	int params3[] = {6, 1, 0, 13, 17};
	char str[50] = "Aticleworld is a programming Blog.";

    
    choice = 0;
	if(argc > 0)
    {
        choice = *argv[1];
    }
    
	if (choice == '1')
	{
		i = 0;
		while (params1[i] != 0)
		{
			ft_memset(str + params2[i], params1[i], params3[i]);
			printf("    %s\n\n", str);
			i++;
		}
	}
	else if (choice == '2')
	{
		i = 0;
		while (params1[i] != 0)
		{
			memset(str + params2[i], params1[i], params3[i]);
			printf("    %s\n\n", str);
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
