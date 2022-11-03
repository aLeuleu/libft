/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:49:07 by alevra            #+#    #+#             */
/*   Updated: 2022/11/03 18:22:19 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	len_s1;
	unsigned int	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = ft_strnew(len_s1 + len_s2);
	ft_strlcpy(res, (char *)s1, ft_strlen((char *)s1));
	ft_strlcpy(res + len_s1, (char *) s2, ft_strlen((char *)s2));
	return (res);
}
