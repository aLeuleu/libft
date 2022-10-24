#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destc;
	const char	*srcc;
	int			i;

	srcc = (char *)src;
	destc = (char *)dest;
	i = 0;
	while (n--)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (dest);
}

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		check_memcpy(void *dest, void *src, int n)
{
	if (dest != ftmemcpy(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 30);
	//free(dest);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	memset(mem, 'j', 30);
		check_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14);
		check_memcpy(mem, "zyxwvutst", 0);
		check_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11);
	return (0);
}
/*
zyxwvutsrqponmjjjjjjjjjjjjjjjjzyxwvutsrqponmjjjjjjjjjjjjjjjjzyxwvutonmjjjjjjjjjjjjjjjj
 */
