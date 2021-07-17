/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:27:15 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/06 19:36:51 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*ptr;

	ptr = 0;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			ptr = &str[i];
			return ((char *)ptr);
		}
		i--;
	}
	return ((char *)ptr);
}
