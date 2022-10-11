#include <stdlib.h>

void	ft_memdel(void	**ap)
{
	int	i;

	i = 0;
	while(ap[i])
	{
		free(ap[i]);
	}
	*ap = NULL;
}
