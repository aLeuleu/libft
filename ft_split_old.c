/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:33:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/09 17:43:21 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		while (s[i] != c && s[i])
			i++;
	}
	return (splits);
}

static char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (NULL);
	while (size > 0)
		res[size--] = 0;
	return (res);
}

static char	**case_no_splits(char const *s, char c)
{
	char	*src_cpy;
	char	**splits;

	if (s[0] != c && s[0])
	{
		src_cpy = ft_strnew(ft_strlen(s) + 1);
		ft_strlcpy(src_cpy, s, ft_strlen(s) + 1);
		splits = malloc(sizeof(char *) * 2);
		if (!splits)
			return (NULL);
		splits[0] = src_cpy;
		splits[1] = NULL;
	}
	else
	{
		splits = malloc(sizeof(void *));
		if (!splits)
			return (NULL);
		splits[0] = NULL;
	}
	return (splits);
}

void	ft_split_by_char(char const *s, char c, char ***splits, int j)
{
	int			start;
	int			end;
	int			splits_count;
	size_t		i;

	i = 0;
	splits_count = get_splits_count(s, c);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = (int ) i;
		while (s[i] != c && s[i])
			i++;
		end = (i - 1);
		if (end - start >= 0)
		{
			(*splits)[splits_count - j] = (char *)
				malloc(sizeof(char) * (end - start + 2));
			ft_strlcpy((*splits)[splits_count - j],
				s + start, end - start + 2);
			j--;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char		**splits;
	int			splits_count;
	int			j;

	splits_count = get_splits_count(s, c);
	j = splits_count;
	if (splits_count == 0 || s == 0)
		return (case_no_splits(s, c));
	splits = malloc(sizeof(char *) * splits_count + 1);
	if (!splits)
		return (NULL);
	splits[splits_count] = NULL;
	ft_split_by_char(s, c, &splits, j);
	return (splits);
}
