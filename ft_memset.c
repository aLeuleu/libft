/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 03:05:37 by leuleu            #+#    #+#             */
/*   Updated: 2022/10/25 00:11:51 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = value;
		i++;
	}
	return (pointer);
}

/*
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

static void		check_memset(void *mem, int c, int n, int mem_size)
{
	if (mem != ft_memset(mem, c, n))
		write(1, "mem's adress was not returned\n", 30);
	write(1, mem, mem_size);
	free(mem);
}

int				main(int argc, const char *argv[])
{
	void	*mem;
	int		mem_size;
	mem_size = 15;
	if (!(mem = malloc(sizeof(*mem) * mem_size)))
		return (-2);
	memset(mem, 'j', mem_size);
		check_memset(mem, 'c', 5, mem_size);
		printf("-");
		fflush(stdout);
		check_memset(mem, 'c', 14, mem_size);
		printf("-");
		fflush(stdout);
		check_memset(mem, '\n', 6, mem_size);
		printf("-");
		fflush(stdout);
		check_memset(mem, '\0', 1, mem_size);
	return (0);
} */
/*

cccccjjjjjjjjjj-ccccccccccccccj-





ccccccccj-




ccccccccj
 */
