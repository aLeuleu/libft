/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:44:11 by alevra            #+#    #+#             */
/*   Updated: 2022/11/11 00:23:05 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destc;
	const unsigned char	*srcc;
	int					i;

	if (!dest || !src)
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
