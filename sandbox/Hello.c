#include <stdio.h>
void	ft_putnstr(char *s, size_t len);

void	main()
{
	char	str[80] = "oaaaaaaa\0\0qwiueasdfghjklmnopqwer";
	ft_putnstr(str, 15);
	//printf(	"%s\n",str);
}
