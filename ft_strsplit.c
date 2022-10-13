#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**tab_res;
	int	str_len;
	int	i;
	int	w_start;
	int	w_size;

	tab_res = (char **)malloc(sizeof(char*) * (w_count(s, c) + 1));
	i = 0;
	while (i <= str_len)
	{
		w_size = 0;
		if (str[i] != c)
		{
			w_start = i;
			w_size++;
			while(str[i] != c)
			{
				w_size++;
				i++;
			}
			tab_res[j] = 
		}	
	}
}
