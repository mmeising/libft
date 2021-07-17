/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:12:42 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/15 18:27:41 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(ft_strlen(s1) + 1);
	if (str == ((void *)0))
		return ((void *)0);
	ft_memmove(str, s1, ft_strlen(s1));
	str[ft_strlen(s1)] = '\0';
	return (str);
}
