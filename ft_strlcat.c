/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:28:44 by alevra            #+#    #+#             */
/*   Updated: 2022/11/11 01:16:32 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dst)
		return (max((size_t)ft_strlen(src),size));
	if (!src && dst)
		return (size);
	while (dst[j] && j < size)
		j++;
	while (src[i] && ((j + i + 1) < size))
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j != size)
		dst[j + i] = '\0';
	return (j + ft_strlen((char *)src));
}
