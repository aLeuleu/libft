/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:10:11 by alevra            #+#    #+#             */
/*   Updated: 2022/11/11 09:31:26 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*mapped_list;

	if (!lst || !f)
		return ;
	mapped_list = ft_lstnew(lst->content);
	f(mapped_list->content);
	ft_lstadd_back(&lst,mapped_list);
	ft_lstiter((lst->next), f);
}
