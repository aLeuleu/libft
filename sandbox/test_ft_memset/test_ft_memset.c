#include <stddef.h>
#include <string.h>
//#include "../libft.h"
#include <stdio.h>

void	*ft_memset(void *pointer, int value, size_t count);

int	main(int argc, char **argv)
{
	char	choice;
	int		i;
	char params1[] = {'b', '0', '?', '@', '!', 0};
	int params2[] = {2, 5, 9, 13, 17};
	int params3[] = {6, 1, 0, 13, 17};
	char str[50] = "Aticleworld is a programming Blog.";
	void	*(*f)(void *, int , size_t );

	choice = '1';
	if(argc > 1)
	{
		choice = *argv[1];
	}

	if (choice == '1')
	{
		f = &ft_memset;
	}
	else if (choice == '2')
	{
		f = &memset;
	}
	else
	{
		printf("test error");
		return (-1);
	}

	i = 0;
	while (params1[i] != 0)
	{
		f(str + params2[i], params1[i], params3[i]);
		printf("    %s\n\n", str);
		i++;
	}

	return (0);
}
