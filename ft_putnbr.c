#include <unistd.h>

void	ft_putnbr(int c)
{
    
	write(1,&c,1);
}
