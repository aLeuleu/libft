#include <stdlib.h>
#include <stddef.h>

void	*ft_memalloc(size_t size)
{
	void	*res;
	int	i;

	i = 0;
	res = malloc(sizeof(size_z) * size);
	if (!res)
		return (NULL);
	while (i < size)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
