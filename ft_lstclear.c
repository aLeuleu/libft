/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:10:15 by alevra            #+#    #+#             */
/*   Updated: 2022/11/11 00:03:07 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (*lst != NULL && (*lst)->next != NULL )
	{
		ft_lstclear(&((*lst)->next),del);
	}
	else
	{
		if (!lst)
			del(lst);
		if (*lst != NULL)
			del(*lst);
	}
}
