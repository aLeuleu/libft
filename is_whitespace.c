#include "libft.h"

int	is_whitespace(char *a)
{
	int res;

	res = 0;
	if(*a == '/f' || *a == '/n' || *a == '/t' || *a == '/v' || *a == '/r' )
		res = 1;
	return (res);
}
