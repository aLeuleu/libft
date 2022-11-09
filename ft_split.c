/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:33:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/09 22:35:17 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//penser a tout free en cas de probleme
typedef struct s_list_split
{
	void				*content;
	struct s_list_split	*next;
}	t_list_split;

static t_list_split	*ft_lstnew(void *a)
{
	t_list_split	*new_element;

	new_element = malloc(sizeof(t_list_split));
	if (!new_element)
		return (NULL);
	new_element->content = a;
	new_element->next = NULL;
	return (new_element);
}

static void	insert_str_into_lst(char *str, size_t	size, t_list_split *list)
{
	t_list_split	*new;
	char			*new_str;

	new_str = malloc(sizeof(char) * (size + 1));
	ft_strlcpy(new_str, str, size);
	if (!new_str)
		return (NULL);
	new = ft_lstnew(new_str);
	new->next = list;
	list = new;
}

void	create_str_tab(void)
{
	return ;
}

char	**ft_split(char const *s, char c)
{
	char			**splits;
	int				start;
	int				end;
	int				i;
	t_list_split	*str_list;

	i = -1;
	start = 0;
	end = 0;
	str_list = ft_lstnew(0);
	while (s[++i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i;
		insert_str_into_lst(s + start, (size_t) end - start, str_list);
	}
	return (splits);
	//return (create_str_tab());
	//faire un realloc ?
}




int main(int argc, char const *argv[])
{
	char * * tab = ft_split("  tripouille  42  ", ' ');
	return 0;
}
