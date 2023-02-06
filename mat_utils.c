/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:55:25 by alevra            #+#    #+#             */
/*   Updated: 2023/01/26 18:01:39 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"

//multiply matrix[3][3] by vect[3]
t_vec	mult_mat(t_mat mat, t_vec vec)
{
	t_vec	res;

	res.la = (mat.ca.la * vec.la) + (mat.cb.la * vec.lb) \
	+ (mat.cc.la) * (vec.lc);
	res.lb = (mat.ca.lb * vec.la) + (mat.cb.lb * vec.lb) \
	+ (mat.cc.lb) * (vec.lc);
	res.lc = (mat.ca.lc * vec.la) + (mat.cb.lc * vec.lb) \
	+ (mat.cc.lc) * (vec.lc);
	return (res);
}

void	show_vect(t_vec vec)
{
	ft_printf("|%d|\n", vec.la);
	ft_printf("|%d|\n", vec.lb);
	ft_printf("|%d|\n", vec.lc);
}
