/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:52:05 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/17 19:56:24 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr_str;
	size_t			i;

	ptr_str = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr_str[i] == (unsigned char)c)
			return (&ptr_str[i]);
		i++;
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = " on this memory zone ";
	char	*spot;
	char	*spot2;
	spot = ft_memchr(str, '\0', 0);
	spot2 = memchr(str, '\0', 0);
	printf("%s\n%s\n", spot, spot2);
	return (0);
}
/*#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr_str;
	size_t			i;
	unsigned char	c;

	ptr_str = (unsigned char *)str;
	i = 0;
	c = (unsigned char)c;
	while (*ptr_str != '\0' && i < n)
	{
		if (*ptr_str == c)
			return (ptr_str);
		ptr_str++;
		i++;
	}
	if (c == '\0')
		return (ptr_str);
	return ((void *)0);
}
*/