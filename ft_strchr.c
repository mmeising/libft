/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:10:35 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/15 18:26:22 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;
	const char	*ptr;

	ptr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			ptr = &str[i];
			return ((char *)ptr);
		}
		i++;
	}
	if (c == '\0')
	{
		ptr = &str[i];
		return ((char *)ptr);
	}
	return (NULL);
}
