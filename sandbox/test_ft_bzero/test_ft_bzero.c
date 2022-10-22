#include <stddef.h>
#include <string.h>
//#include "../libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	char	choice;
	int		i;
	char params1[] = {'b', '0', '?', '@', '!', 0};
	int params2[] = {2, 5, 9, 13, 17};
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
		f(str + params2[i], params3[i]);
		printf("    %s\n\n", str);
		i++;
	}

	return (0);
}
