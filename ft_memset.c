#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	char *ptr;
	size_t i;

	ptr = (char)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
}

int main()
{
	return (0);
}