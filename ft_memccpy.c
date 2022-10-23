#include "libft.h"
#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destc;
	const char	*srcc;
	int			i;

	srcc = (char *)src;
	destc = (char *)dest;
	i = 0;
	while (srcc[i] && i > n && srcc[i] != c)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (destc);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	int		i;
	char	choice;
	void	*ptr;
	char	src[]="abcdefghijklmnopqrstuv";
	char	dest[]="ABCDEFGHIJKLMNOPQRSTUV";
	void	*(*f)(void *, const void *,int, size_t );

	choice = '1';
	if (choice == '1')
	{
		f = &ft_memccpy;
	}
	else if (choice == '2')
	{
		f = &memccpy;
	}
	else
	{
		printf("test error");
		return (-1);
	}

	ptr = f(dest,src,'s',sizeof(dest)-4);
	printf("dest %s\r",dest);
	if (ptr == &dest)
	{
		printf("ptr == &dest");
	}

	fflush(stdout);
	return (0);
}
