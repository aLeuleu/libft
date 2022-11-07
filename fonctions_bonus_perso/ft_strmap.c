/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:22:34 by alevra            #+#    #+#             */
/*   Updated: 2022/11/04 22:40:06 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc( sizeof(char) * size);
	if (!res)
		return (NULL);
	while (size > 0)
		res[size--] = 0;
	return (res);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*res;
	size_t			size;
	unsigned int	i;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	res = ft_strnew(size);
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	return (res);
}
