#include <stddef.h>
#include <stdio.h> 

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char *ptr;
	size_t i;


	ptr = (unsigned char*)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
}

