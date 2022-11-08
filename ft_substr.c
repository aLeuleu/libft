/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:55:54 by alevra            #+#    #+#             */
/*   Updated: 2022/11/08 19:25:08 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(res = (char *)ft_calloc(ft_min(ft_strlen(s) + 1,(int)len +1), sizeof(char))))
		return (NULL);
	while (len > 0 && s[start] != '\0' && i < len)
		res[i++] = s[start++];
	return (res);
}
