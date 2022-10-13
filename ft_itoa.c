#include "libft.h"


// 234 --> "234"
int	ft_abs(int n)
{
	if(n < 0)
		return (-n);
	else
		return (n);
}

int	ft_nb_size(int n)
{
	int	power_of_tens;
	int	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	power_of_tens = 1;
	while (n > power_of_tens)
	{
	       power_of_tens *= 10;
	       size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int	i;
	int	size;
	char	*res;
	int	abs_n;

	size = ft_nb_size(n);
	res = malloc(sizeof(char) * (size+1));	
	abs_n = ft_abs(n);
	res[size] = 0;
	while(i < size)
	{
		res[size - i] = abs_n%10 + '0';
		abs_n /= 10;
		i++;
	}
	return (res);
}
