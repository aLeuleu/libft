/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:55:54 by alevra            #+#    #+#             */
/*   Updated: 2022/11/04 00:04:42 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (!(res = (char *)calloc(len + 1, sizeof(char))))
		return (NULL);
	while (len > 0 && s[start] != '\0' && i < len)
		res[i++] = s[start++];
	return (res);
}
