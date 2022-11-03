/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:25:00 by alevra            #+#    #+#             */
/*   Updated: 2022/11/03 22:52:10 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	if (!(res = malloc(nmemb * size)))
		return (NULL);
	return (ft_memset(res, 0, nmemb * size));
}
