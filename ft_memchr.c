/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:53:20 by alevra            #+#    #+#             */
/*   Updated: 2022/10/24 23:28:21 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char *uc_s;
	unsigned char uc_c;

	uc_c = (unsigned char) c;
	uc_s= (unsigned char *) s;
	i = 0;
	while ( uc_s[i] && uc_s[i] != uc_c && n > 1 )
	{
		i ++;
		n --;
	}
	if (uc_s[i] == uc_c )
		return (void *)(s+i);
	else
		return (NULL);
}

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		ft_print_result(const char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_memchr(void *s, char c, int n)
{
	const char *str;

	str = ft_memchr(s, c, n);
	if (!str)
		ft_print_result("NULL");
	else
		ft_print_result(str);
	printf("\n");
}

int				main(int argc, const char *argv[])
{
		check_memchr("bonjour", 'b', 4);
		check_memchr("bonjour", 'o', 7);
		check_memchr("bonjourno", 'n', 2);
		check_memchr("bonjour", 'j', 6);
		check_memchr("bonjour", 's', 7);
		int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
		printf("%s", (char *)ft_memchr(tab, -1, 7));
	return (0);
}
