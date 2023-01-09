/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alevra <alevra@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 00:52:45 by alevra            #+#    #+#             */
/*   Updated: 2022/12/06 16:32:33 by alevra           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 11
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 2048
# endif

char		*get_next_line(int fd);
int			strlen_until_gnl(char *str, char delimiter);
void		*ft_memcpy_gnl(void *dest, const void *src, size_t n);
void		*ft_memset_gnl(void *pointer, int value, size_t count);
size_t		ft_strlcat_gnl(char *dst, const char *src, size_t size);
char		*ft_realloc_gnl(char *oldstr, size_t newstr_size);

#endif