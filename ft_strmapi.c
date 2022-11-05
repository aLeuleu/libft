/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 22:43:21 by alevra            #+#    #+#             */
/*   Updated: 2022/11/04 22:46:44 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * size);
	if (!res)
		return (NULL);
	while (size > 0)
		res[size--] = 0;
	return (res);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			size;
	unsigned int	i;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	res = ft_strnew(size + 1);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
