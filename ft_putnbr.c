#include <unistd.h>

void	ft_putnbr(int n)
{
    char    c;

    if (n < 0)
    {
        c = '-';
	    write(1,&c,1);
        ft_putnbr(-n);
        return;
    }
    if (n > 10)
        {
            ft_putnbr(n/10);
            ft_putnbr(n%10);
        }
    c = n + '0';
	write(1,&c,1);
}
