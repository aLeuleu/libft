/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:52:37 by alevra            #+#    #+#             */
/*   Updated: 2022/10/24 23:21:42 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int	is_plus_or_minus(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	skip_whitespace(char *a)
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

int	skip_plus_and_minus(char *a, int *sign)
{
	int	offset;

	*sign = 1;
	offset = 0;
	while (is_plus_or_minus(a[offset]))
	{
		offset++;
		*sign *= -1;
	}
	return (offset);
}
#include <stdio.h>

int	ft_atoi(const char *a)
{
	int	res;
	int	i;
	int	sign;

	//gerer max int
	//skip whitespace
	//manage + and -
	res = 0;
	i = skip_whitespace((char *)a);
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
		res *= 10;
		res += a[i] - '0';
		i++;
	}
	res *= sign;
	return (res);
}

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static void	ft_print_result2(char c)
{
	write(1, &c, 1);
}

static void	ft_print_result(int n)
{
	if (n >= 0)
	{
		if (n >= 10)
			ft_print_result(n / 10);
		ft_print_result2(n % 10 + '0');
	}
	else
	{
		ft_print_result2('-');
		if (n <= -10)
			ft_print_result(n / -10);
		ft_print_result2(n % -10 * -1 + '0');
	}
}

int	main(int argc, const char *argv[])
{
	ft_print_result(ft_atoi("0"));
	printf("\n");
	ft_print_result(ft_atoi("546:5"));
	printf("\n");
	ft_print_result(ft_atoi("-4886"));
	printf("\n");
	ft_print_result(ft_atoi("+548"));
	printf("\n");
	ft_print_result(ft_atoi("054854"));
	printf("\n");
	ft_print_result(ft_atoi("000074"));
	printf("\n");
	ft_print_result(ft_atoi("+-54"));
	printf("\n");
	ft_print_result(ft_atoi("-+48"));
	printf("\n");
	ft_print_result(ft_atoi("--47"));
	printf("\n");
	ft_print_result(ft_atoi("++47"));
	printf("\n");
	ft_print_result(ft_atoi("+47+5"));
	printf("\n");
	ft_print_result(ft_atoi("-47-5"));
	printf("\n");
	ft_print_result(ft_atoi("\e475"));
	printf("\n");
	ft_print_result(ft_atoi("\t\n\r\v\f  469 \n"));
	printf("\n");
	ft_print_result(ft_atoi("-2147483648"));
	printf("\n");
	ft_print_result(ft_atoi("2147483647"));
	printf("\n");
	ft_print_result(ft_atoi("\t\n\r\v\fd469 \n"));
	printf("\n");
	ft_print_result(ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("\n");
	ft_print_result(ft_atoi(""));
	return (0);
}

/*
0
546
-4886
548
54854
74
0
0
0
0
47
-47
0
469
-2147483648
2147483647
0
-46
0
 */ft_atoi
