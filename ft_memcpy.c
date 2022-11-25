/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_gnl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:44:11 by alevra            #+#    #+#             */
/*   Updated: 2022/11/21 11:31:53 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_gnl(void *dest, const void *src, size_t n)
{
	unsigned char		*destc;
	const unsigned char	*srcc;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	srcc = (unsigned char *)src;
	destc = (unsigned char *)dest;
	i = 0;
	while (n--)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (dest);
}
