/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:52:37 by alevra            #+#    #+#             */
/*   Updated: 2023/01/21 13:33:02 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static int	is_plus_or_minus(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

static int	skip_whitespace(const char *a)
{
	int	offset;

	offset = 0;
	while (a[offset] == '\f' || a[offset] == '\n' || a[offset] == '\t'
		|| a[offset] == '\v' || a[offset] == '\r' || a[offset] == ' ')
	{
		offset++;
	}
	return (offset);
}

int	ft_atoi(const char *a)
{
	long long	res;
	size_t		i;
	int			sign;

	res = 0;
	i = skip_whitespace(a);
	sign = 1;
	if (is_plus_or_minus(a[i]) && is_plus_or_minus(a[i + 1]))
		return (0);
	if (a[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (a[i] == '+')
		i++;
	while (is_number(a[i]))
	{
		if (res != ((res * 10) + (a[i] - 48)) / 10)
			return ((sign + 1) / -2);
		res = (res * 10) + a[i] - '0';
		i++;
	}
	res *= sign;
	return ((int)res);
}

static int	is_hexa(char c)
{
	int	is_number;
	int	is_hex_letter;

	is_number = (c >= '0' && c < '9');
	is_hex_letter = (c >= 'A' && c <= 'F');
	return (is_number || is_hex_letter);
}

static int	hex_value(char c)
{
	int	is_number;
	int	is_hex_letter;

	is_number = (c >= '0' && c < '9');
	is_hex_letter = (c >= 'A' && c <= 'F');
	if (is_number)
		return (c - '0');
	if (is_hex_letter)
		return (c - 'A' + 10);
	return (0);
}

int		ft_hextoi(const char *a)
{
	long long	res;
	size_t		i;
	int			sign;
	
	res = 0;
	i = skip_whitespace(a);
	sign = 1;
	if (is_plus_or_minus(a[i]) && is_plus_or_minus(a[i + 1]))
		return (0);
	if (a[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (a[i] == '+')
		i++;
	while (is_hexa(a[i]))
	{
		res = (res * 16) + hex_value(a[i]);
		i++;
	}
	res *= sign;
	return ((int)res);
}
