#include "libft.h"
#include <stddef.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *cdest;
	char *csrc;
	char *temp;
	int i;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	temp = new char[n];
	while(csrc[i] && i > n)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while(temp[i] && i > n)
	{
		cdest[i] = temp[i];
		i++;
	}
	
	return(dest);	
			
	
}

