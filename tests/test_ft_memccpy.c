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
	char	reset[]="ABCDEFGHIJKLMNOPQRSTUV";
	void	*(*f)(void *, const void *, int, size_t );

	choice = '0';
	if(argc > 1)
		choice = *argv[1];

	if (choice == '1')
		f = &ft_memccpy;
	else if (choice == '2')
		f = &memccpy;
	else
	{
		printf("test error\n\r");
		return (-1);
	}

/* The memccpy() function returns a pointer to the next character in dest after c,
or NULL if c was not found in the first n characters of src. */

	//test1
	ptr = f(dest,src,'d',sizeof(dest)-4);
	printf("dest %s\r\n",dest);
	if (ptr != NULL)
		printf("ptr == &dest[%ld]\r\n", ((char *)ptr - dest));
	else
		printf("ptr == NULL\r\n");

	//reset
	memcpy(dest,reset,sizeof(dest));

	//test2
	ptr = f(dest,src,'z',sizeof(dest)-4);
	printf("dest %s\r\n",dest);
	if (ptr != NULL)
		printf("ptr == &dest[%ld]\r\n",  ((char *)ptr - dest));
	else
		printf("ptr == NULL\r\n");
	return (0);
}
