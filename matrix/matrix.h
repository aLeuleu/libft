/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:54:51 by alevra            #+#    #+#             */
/*   Updated: 2023/01/26 18:02:31 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "../libft.h"

typedef struct s_vector
{
	int	la;
	int	lb;
	int	lc;
}	t_vec;

typedef struct s_matrix
{
	t_vec	ca;
	t_vec	cb;
	t_vec	cc;
}	t_mat;

t_vec	mult_mat(t_mat mat, t_vec vec);
void	show_vect(t_vec vec);

#endif