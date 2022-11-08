/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:33:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/08 17:05:31 by alevra           ###   ########lyon.fr   */
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

	splits = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			splits++;
		while(s[i] != c && s[i])
			i++;
	}
	return (splits);
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

	if (s[0] != c && s[0])
	{
		src_cpy = ft_strnew(ft_strlen(s) + 1);
		ft_strlcpy(src_cpy, s, ft_strlen(s) + 1);
		if (!(splits = malloc(sizeof(char *) * 2)))
			return (NULL);
		splits[0] = src_cpy;
		splits[1] = NULL;
	}
	else
	{
		if (!(splits = malloc(sizeof(void *) * 1)))
			return (NULL);
		splits[0] = NULL;
	}
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char		**splits;
	size_t		i;
	int			splits_count;
	int			j;
	int			split_len;
	int			start;
	int			end;

	splits_count = get_splits_count(s, c);
	i = 0;
	j = splits_count;
	if (splits_count == 0 || s == 0)
		return case_no_splits(s,c);
	if (!(splits = (char**)malloc(sizeof(char*) * splits_count +1 )))
		return (NULL);
	splits[splits_count] = NULL;
	split_len = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i -1;
		if (end - start >= 0)
		{
			splits[splits_count - j] = (char*)malloc(sizeof(char) * (end - start) );
			ft_strlcpy(splits[splits_count - j], s + start, end - start + 1);
			j--;
		}
	}
	return (splits);
}


