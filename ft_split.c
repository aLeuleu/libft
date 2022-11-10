/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:33:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/10 14:10:30 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freetab(void **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab[i]);
	free(tab);
}

static char	**ft_realloc_split(char **splits, int splits_size)
{
	char	**splits_new;

	splits_new = malloc(sizeof(char *) * (splits_size + 1));
	if (!splits_new)
		return (freetab((void **)splits), NULL);
	if (splits != NULL)
		ft_memmove(splits_new, splits, sizeof(char *) * splits_size);
	free(splits);
	splits_new[splits_size] = NULL;
	return (splits_new);
}

static char	**insert_split(const char *str, int	size, char **splits, int splits_size)
{
	char			*new_str;

	if (size < 0)
		size = 0;
	new_str = malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (freetab((void **)splits), NULL);
	ft_strlcpy(new_str, str, size + 1);
	splits = ft_realloc_split (splits,splits_size);
	splits[splits_size - 1] = new_str;
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char			**splits;
	int				start;
	int				end;
	int				i;
	int				splits_size;

	splits_size = 1;
	i = -1;
	start = 0;
	end = 0;
	splits = NULL;
	while (s[++i])
	{
		while (s[i] == c)
			start = ++i;
		while (s[i] != c && s[i])
			end = ++i;
		if (start < end || splits == NULL)
			splits = insert_split(s + start, end - start, splits, splits_size++);
		if (splits == NULL)
			return (NULL);
		start = end;
	}
	return (splits);
}

int main(int argc, char const *argv[])
{
	char **tab = ft_split("     ", ' ');
	return 0;
}
