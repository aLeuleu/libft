#include <stddef.h>
#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	char	choice;
	void	*ptr;
	char	src[]="abcdefghijklmnopqrstuv";
	char	dest[]="ABCDEFGHIJKLMNOPQRSTUV";
	void	*(*f)(void *, const void *, size_t );

	choice = '0';
	if(argc > 1)
		choice = *argv[1];

	if (choice == '1')
		f = &ft_memcpy;
	else if (choice == '2')
		f = &memcpy;
	else
	{
		printf("test error");
		return (-1);
	}

	printf("dest %s\r\n",dest);
	if (ptr == &dest)
		printf("ptr == &dest\r\n");
	else
		printf("ptr != &dest\r\n");

	return (0);
}
