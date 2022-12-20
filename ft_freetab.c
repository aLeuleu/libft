/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:42:46 by alevra            #+#    #+#             */
/*   Updated: 2022/12/19 18:35:03 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freetab(void **tab, int position)
{
	ft_printf("f3 pos : %d\n", position);			
	if (position >= 0)
	{
		while (position >= 0)
		{
			ft_printf("f4 pos : %d\n", position);			
			ft_printf("%s\n", (char *)(tab[position]));
			free(tab[position]);
			position--;
		}
	}
	free(tab);
}
