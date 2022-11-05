/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 23:35:55 by alevra            #+#    #+#             */
/*   Updated: 2022/11/04 23:52:30 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *a)
{
	t_list	*new_element;

	if (!(new_element = malloc(sizeof(t_list))))
		return (NULL);
	new_element->content = a;
	new_element->next = NULL;
	return (new_element);
}
