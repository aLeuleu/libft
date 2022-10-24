#include "libft.h"
#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destc;
	const char	*srcc;
	size_t		i;

	srcc = (char *)src;
	destc = (char *)dest;
	i = 0;
	while (srcc[i] && i < n)
	{
		destc[i] = srcc[i];
		i++;
		if (srcc[i - 1] == c)
			break ;
	}
	if (srcc[--i] == c)
	{
		i++;
		return (dest + i);
	}
	return (NULL);
}


#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_memccpy(void *dest, void *src, int c, int n)
{
	void	*membis;

	membis = dest;
	if (!(dest = ft_memccpy(dest, src, c, n)))
	{
		ft_print_result("NULL");
		write(1, "\n", 1);
		ft_print_result(membis);
	}
	else
	{
		ft_print_result(dest);
		write(1, "\n", 1);
		ft_print_result(membis);
	}
	free(membis);
}

int				main(int argc, const char *argv[])
{
	void	*mem;

	if (!(mem = malloc(sizeof(*mem) * 30)) )
		return (0);
	memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';
		check_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 20);
			memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';
		check_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'r', 3);
			memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';
		check_memccpy(mem, "zyxwvutsrqponmlkjihgfedcba", 'a', 26);
			memset(mem, 'j', 29);
	((char*)mem)[29] = '\0';
		check_memccpy(mem, "zyxwvuzyxwvu", 'x', 20);
	return (0);
}
