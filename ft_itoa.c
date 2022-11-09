/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:53:28 by alevra            #+#    #+#             */
/*   Updated: 2022/11/09 16:54:21 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_nb_size(int n)
{
	int	power_of_tens;
	int	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	power_of_tens = 10;
	while (n >= power_of_tens)
	{
		power_of_tens *= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*res;
	int		abs_n;

	if (n == -2147483648LL)
		return (ft_strdup("-2147483648"));
	else if (n == 2147483647LL)
		return (ft_strdup("2147483647"));
	size = ft_nb_size(n);
	res = malloc(sizeof(char) * (size + 1));
	abs_n = ft_abs(n);
	res[size] = '\0';
	i = 0;
	while (i < size)
	{
		res[size - i - 1] = abs_n % 10 + '0';
		abs_n /= 10;
		i++;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
