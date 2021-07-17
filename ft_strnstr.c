/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:17:36 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/13 20:26:56 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*start;

	j = 0;
	if (!haystack && !needle)
		return (NULL);
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[j] != '\0' && ft_strlen(needle) <= len)
	{
		i = 0;
		start = &haystack[j];
		while (haystack[j + i] == needle[i] && haystack[j + i] != '\0'
			&& needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (start);
		j++;
		len--;
	}
	return (0);
}
