/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:29:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/07 17:29:50 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memalloc(size_t size)
{
	void	*res;
	int	i;

	i = 0;
	res = (void*) malloc(sizeof(size_z) * size);
	if (!res)
		return (NULL);
	while (i < size)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}
