/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:38:38 by alevra            #+#    #+#             */
/*   Updated: 2022/11/03 11:59:23 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		c = '-';
		write(1, &c, 1);
		ft_putnbr_fd(-n,fd);
		return ;
	}
	if (n > 10)
	{
		ft_putnbr_fd(n / 10,fd);
		ft_putnbr_fd(n % 10,fd);
	}
	c = n + '0';
	write(1, &c, fd);
}
