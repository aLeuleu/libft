/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:53:28 by alevra            #+#    #+#             */
/*   Updated: 2022/10/24 18:55:38 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *str);

int	ft_abs(int n)
{
	if(n < 0)
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
	while (n > power_of_tens)
	{
	       power_of_tens *= 10;
	       size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int	i;
	int	size;
	char	*res;
	int	abs_n;

	if (n == -2147483648LL || n == 2147483647)
	{
		if (n == -2147483648LL)
			return ft_strdup("-2147483648");
	else if (n == 2147483647)
			return ft_strdup("2147483647");

	}
	size = ft_nb_size(n);
	res = malloc(sizeof(char) * (size+1));
	abs_n = ft_abs(n);
	res[size] = '\0';
	i = 0;
	while(i < size)
	{
		res[size - i - 1] = abs_n%10 + '0';
		abs_n /= 10;
		i++;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

static void		ft_print_result(char *s)
{
	int		len;

	if (!s)
		write(1, "NULL", 4);
	else
	{
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
		free(s);
	}
	printf("\n");
}

int				main(int argc, const char *argv[])
{
		ft_print_result(ft_itoa(0));
		ft_print_result(ft_itoa(-9));
		ft_print_result(ft_itoa(9));
		ft_print_result(ft_itoa(10));
		ft_print_result(ft_itoa(-10));
		ft_print_result(ft_itoa(8124));
		ft_print_result(ft_itoa(-9874));
		ft_print_result(ft_itoa(543000));
		ft_print_result(ft_itoa(-2147483648LL));
		ft_print_result(ft_itoa(2147483647));
	return (0);
}
