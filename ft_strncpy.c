/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:51:46 by alevra            #+#    #+#             */
/*   Updated: 2022/11/07 15:51:47 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest,const char *src, size_t n)
{
	size_t	i;

	while (src[i] && i < n)
	{
		dest[i] =src[i];
		i++;
	}
	while ( i < n )
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}
