/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:41:40 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/15 18:28:53 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (str == ((void *)0))
		return ((void *)0);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy((str + ft_strlen(s1)), s2, ft_strlen(s2));
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (str);
}
