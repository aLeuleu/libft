/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:33:09 by alevra            #+#    #+#             */
/*   Updated: 2022/11/09 12:30:08 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;
	char			*res;

	i = 0;
	char_c = (char) c;
	while (s[i] != char_c && s[i])
		i++;
	if (s[i] == char_c)
	{
		res = (char *) s + i;
		return (res);
	}
	else
		return (NULL);
}
