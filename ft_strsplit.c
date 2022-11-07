/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:39:00 by alevra            #+#    #+#             */
/*   Updated: 2022/11/07 17:42:02 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	w_count(const char *str, char sep)
{
	int	i;
	int	w_count;
	int	str_len;

	i = 0;
	w_count = 0;
	str_len = ft_strlen(str);
	while( i <= str_len)
	{
		if (str[i] != sep)
		{
			w_count++;
			while (str[i] != sep)
				i++;
		}
		i++;
	}
	return (w_count);
}

static	int	set_next_word(const char *s,char sep, char *ptr)
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
