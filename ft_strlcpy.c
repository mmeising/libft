/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:06:09 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/17 19:17:28 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	int dst_size = 41;
	int f_size = 41;
	char	src[] = "---1-2-3-4-5-6-7-8--8-8--8-4------4--4---";
	char	dst[dst_size];
	char	*src2 = strdup(src);
	char	*dst2 = strdup(dst);
	int re1 = ft_strlcpy(dst, src, f_size);
	int re2 = strlcpy(dst2, src2, f_size);
	printf("expected>%s\nactual>>>%s\n", dst2, dst);
	printf("expected>%d\nactual>>>%d\n", re2, re1);
	return (0);
}