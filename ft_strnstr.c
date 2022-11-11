/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:22:36 by alevra            #+#    #+#             */
/*   Updated: 2022/11/11 00:31:03 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_needle_found(const char *haystack, const char *needle);

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	i;
	int				needle_len;

	if (!haystack || !needle)
		return (NULL);
	needle_len = ft_strlen((char *)needle);
	if (n < (size_t) needle_len)
		n = 0;
	else
		n -= needle_len;
	i = 0;
	while (n > 0 && haystack[i] && !is_needle_found(haystack + i, needle))
	{
		i++;
		n--;
	}
	if (is_needle_found(haystack + i, needle))
		return ((char *)haystack + i);
	else
		return (NULL);
}

static int	is_needle_found(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((haystack[i] == needle [j]) && haystack[i] && needle [j])
	{
		i++;
		j++;
	}
	if (needle[j] == 0)
		return (1);
	else
		return (0);
}
