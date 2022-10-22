/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leuleu <leuleu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:05:37 by leuleu            #+#    #+#             */
/*   Updated: 2022/10/18 23:15:39 by leuleu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *pointer, int value, size_t count)
{

	unsigned char	*ptr;
	size_t			i;
	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
	return (pointer);
}
