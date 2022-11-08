/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:33:49 by alevra            #+#    #+#             */
/*   Updated: 2022/11/08 16:29:28 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Alloue (avec malloc(3)) et retourne un tableau
de chaînes de caractères obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL. */

static	int	get_splits_count(char const *s, char c)
{
	size_t	i;
	int		splits;

	splits = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			splits++;
		while(s[i] != c && s[i])
			i++;
	}
	return (splits);
}

static char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc( sizeof(char) * size);
	if (!res)
		return (NULL);
	while (size > 0)
		res[size--] = 0;
	return (res);
}

static char** case_no_splits(char const *s)
{
	char *src_cpy;
	char **splits;

	src_cpy = ft_strnew(ft_strlen(s) + 1);
	ft_strlcpy(src_cpy, s, ft_strlen(s) + 1);
	if (!(splits = malloc(sizeof(char *) * 2)))
		return (NULL);
	splits[0] = src_cpy;
	splits[1] = NULL;
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	char		**splits;
	size_t		i;
	int			splits_count;
	int			j;
	int			split_len;
	int			start;
	int			end;

	splits_count = get_splits_count(s, c);
	i = 0;
	j = splits_count;
	if (splits_count == 0)
		return case_no_splits(s);
	if (!(splits = (char**)malloc(sizeof(char*) * splits_count +1 )))
		return (NULL);
	splits[splits_count] = NULL;
	split_len = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		end = i -1;
		if (end - start > 0)
		{
			splits[splits_count - j] = (char*)malloc(sizeof(char) * (end - start) );
			ft_strlcpy(splits[splits_count - j], s + start, end - start + 1);
			j--;
		}
	}
	return (splits);
}


#include <string.h>
#include <stdio.h>

void freeTab(char * * tab)
{
	for (int i = 0; tab[i] != NULL; ++i)
		free(tab[i]);
	free(tab);
}
static int i_static = 0;
void	check(int s)
{
	printf("%d",i_static);
	if (s)
		printf("OK\n");
	else
		printf("nok\n");
	i_static++;
}
void	showLeaks()
{
	printf("\n");
}

int main(void)
{

	char * * tab = ft_split("  tripouille  42  ", ' ');

	/* 1 */ check(!strcmp(tab[0], "tripouille"));

	/* 2 */ check(!strcmp(tab[1], "42"));

	/* 3 */ check(tab[2] == NULL);
	freeTab(tab); showLeaks();

	tab = ft_split("tripouille", 0);
	/* 4 */ check(!strcmp(tab[0], "tripouille"));
	/* 5 */ check(tab[1] == NULL);
	freeTab(tab); showLeaks();

	tab = ft_split("     ", ' ');
	/* 6 */ check(tab[0] == NULL);
	free(tab); showLeaks();

/* 	char * invalidReadCheck = new char; *invalidReadCheck = 0;
	tab = ft_split(invalidReadCheck, 0);
	 check(tab[0] == NULL); delete invalidReadCheck;
	free(tab); showLeaks(); */

	tab = ft_split("chinimala", ' ');
	/* 7 */ check(!strcmp(tab[0], "chinimala"));
	/* 8 */ check(tab[1] == NULL);
	freeTab(tab); showLeaks();

	tab = ft_split("", ' ');
	/* 9 */ check(tab[0] == NULL);
	freeTab(tab); showLeaks();

	/* sguerra- */
	char * splitme = strdup("Tripouille");
	tab = ft_split(splitme, ' ');
	/* 17 */ check(!strcmp(tab[0], "Tripouille"));
	/* 18 */ check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	splitme = strdup("Tripouille ");
	tab = ft_split(splitme, ' ');
	/* 20 */ check(!strcmp(tab[0], "Tripouille"));
	/* 21 */ check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	splitme = strdup(" Tripouille");
	tab = ft_split(splitme, ' ');
	/* 23 */ check(!strcmp(tab[0], "Tripouille"));
	/* 24 */ check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	splitme = strdup(" Tripouille ");
	tab = ft_split(splitme, ' ');
	/* 26 */ check(!strcmp(tab[0], "Tripouille"));
	/* 28 */ check(tab[1] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	/* wleite */
	splitme = strdup("--1-2--3---4----5-----42");
	tab = ft_split(splitme, '-');
	/* 30 */ check(!strcmp(tab[0], "1"));

	/* 32 */ check(!strcmp(tab[1], "2"));

	/* 34 */ check(!strcmp(tab[2], "3"));

	/* 36 */ check(!strcmp(tab[3], "4"));

	/* 38 */ check(!strcmp(tab[4], "5"));

	/* 40 */ check(!strcmp(tab[5], "42"));

	/* 42 */ check(tab[6] == NULL);
	free(splitme); freeTab(tab); showLeaks();

	write(1, "\n", 1);
	return (0);
}
