/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:33:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/07 21:57:51 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue (avec malloc(3)) et retourne un tableau
de chaînes de caractères obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL. */

static	int	get_splits_count(char const *s, char c)
{
	size_t	i;
	int		splits;
	int		split_size;

	splits = 1;
	i = 0;
	while (s[i])
	{
		if (s[i++] == c)
			splits++;
	}
	return (splits);
}
static int	get_split_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

static char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc( sizeof(char) * size);
	if (!res)
		return (NULL);
	while (size > 0)
		res[size--] = 0;
	return (res);
}

static char** case_no_splits(char const *s, char c)
{
	char *src_cpy;
	char **splits;

	src_cpy = ft_strnew(ft_strlen(s) + 1);
	ft_strlcpy(src_cpy, s, ft_strlen(s) + 1);
	if (!(splits = malloc(sizeof(char *) * 2)))
		return (NULL);
	splits[0] = src_cpy;
	splits[1] = NULL;
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char		**splits;
	size_t		i;
	int			splits_count;
	int			j;

	splits_count = get_splits_count(s, c);
	i = 0;
	j = splits_count;
	if (splits_count == 0)
		return case_no_splits(s,c);
	if (!(splits = (char**)malloc(sizeof(char*) * splits_count +1 )))
		return (NULL);
	splits[splits_count+1] = NULL;
	while (s[i])
	{
		if (s[i++] == c)
			splits[splits_count - j] = (char*)malloc(sizeof(char) * get_split_len(s + i,c) );
		j--;
	}
	return (splits);
}

int main(int argc, char const *argv[])
{
	char ** tab = ft_split("111111d22222d3333", 'd');
	return 0;
}
