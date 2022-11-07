/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:44:11 by alevra            #+#    #+#             */
/*   Updated: 2022/11/07 17:44:12 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destc;
	const char	*srcc;
	int			i;

	srcc = (char *)src;
	destc = (char *)dest;
	i = 0;
	while (n--)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (dest);
}
