/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:47:28 by leuleu            #+#    #+#             */
/*   Updated: 2022/11/02 23:35:25 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <string.h>


void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static void		check_bzero(void *mem, int c, int len, int n_bzero)
{
	memset(mem, c, len);
	ft_bzero(mem, n_bzero);
	write(1, mem, len);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		len;

	len = 5;
	if ( !(mem = malloc(sizeof(*mem) * len)))
		return (0);
	check_bzero(mem, 'e', len, 5);
	printf("sdf\n");
	check_bzero(mem, 'e', len, 0);
	free(mem);
	return (0);
} */
