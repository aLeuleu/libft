#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab_res;
	int	str_len;
	int	i;
	int	j;

	w_count = w_count(s, c);
	tab_res = (char **)malloc(sizeof(char*) * (w_count) + 1);
	if (!tab_res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < w_count)
	{
		j = set_next_word(s[j], c, tab_res[i]);
		i++;
	}
	tab_res[i] = 0;
	return (tab_res);
}
int	set_next_word(const char *s,char sep, char *ptr)
{
	int	w_start;
	int	w_size;
	int	w_count;
	int	i;

	i = 0;
	w_size = 0;
	w_start = 0;
	while(str[i] == sep)
		i++;
	w_start = i;
	while(str[i] != sep)
	{
		w_size++;
		i++;
	}
	ptr = malloc(sizeof(char*) * (w_size +1));
	if (!ptr)
		return (NULL);
	ft_strncpy(str[w_start],ptr,w_size);
	return (w_start + w_size);
}
