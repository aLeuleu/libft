#include "libft.h"

int	ft_atoi(const char *a)
{
	//gerer max int
	//skip whitespace
	//manage + and - 
	int res;
	int i;
	int sign;

	res= 0;
	i = skip_whitespace(a);
	i = skip_plus_and_minus(a[i], *sign)
	while (is_number(a[i]))	
	{
		res*= 10;
		res += a[i] - '0';
	}
	printf("%d",res);
	return (res);
}




int	*skip_whitespace(char *a) 
{
	int offset;

	offset = 0;
	while(is_whitespace(a[offset]))
	{
		offset++;
	}
	return (offset);
}

int	*skip_plus_and_minus(char *a, int *sign) 
{
	int offset;

	sign = 1;
	offset = 0;
	while(is_plus_or_minus(a[offset]))
	{
		offset++;
		sign *=-1;
	}
	return (offset);
}
