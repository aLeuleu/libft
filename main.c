/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leuleu <leuleu@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:09:56 by leuleu            #+#    #+#             */
/*   Updated: 2022/09/04 22:09:56 by leuleu           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main()
{
	// ft_strlen
	printf("ft_strlen");
	if (ft_strlen("") != strlen(""))
		display_error("test 1");
	if (ft_strlen("Aa") != strlen("Aa"))
		display_error("test 2");
	if (ft_strlen("ioj siodf  900980  iw9ef j L:JK EEEEJF09 ") != strlen("ioj siodf  900980  iw9ef j L:JK EEEEJF09 "))
		display_error("test 3");
	printf("OK !");

	//ft_strdup
	printf("ft_strdup");
	if (!strcmp("", ft_strdup("")))
		display_error("test 1");
	if (!strcmp("a", ft_strdup("a")))
		display_error("test 2");
	if (!strcmp("OHOIH f u-sd0 f-s dif-sdf-3 034n8 f9j40jf43 -", ft_strdup("OHOIH f u-sd0 f-s dif-sdf-3 034n8 f9j40jf43 -")))
		display_error("test 3");
	
	//ft_strcpy
	printf("ft_strcpy")
	if (!ft_strcpy("Bonjour")ss)
}

void	display_error(char *test_name)
{
	printf("%s KO", test_name);
	assert(0);
}