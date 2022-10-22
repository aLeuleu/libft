/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leuleu <leuleu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:47:28 by leuleu            #+#    #+#             */
/*   Updated: 2022/10/20 18:22:47 by leuleu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
#include <string.h>

void	*ft_memset(void *pointer, int value, size_t count);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
