#include <stddef.h>
#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	choice;
	int		i;

	int params2[] = {2, 5, 9, 13, 17, 999};
	int params3[] = {6, 1, 0, 13, 17};
	char str[50] = "Aticleworld is a programming Blog.";

	void	(*f)(void *, size_t );

	choice = 0;
	if(argc > 0)
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
	while (params2[i] != 999)
	{
		f(str + params2[i], params3[i]);
		printf("    %s\n\n", str);
		i++;
	}

	return (0);
}
