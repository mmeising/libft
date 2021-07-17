/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 16:59:07 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/13 17:55:33 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_if_set(char c, char const *set)
{
	int	len;
	int	flag;

	len = ft_strlen(set);
	flag = 0;
	while (len >= 0)
	{
		if (c == set[len])
			flag = 1;
		len--;
	}
	return (flag);
}

char	*ft_i_is_len_s1(char *trimmed)
{
	trimmed = malloc(1);
	trimmed[0] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	trimmed = NULL;
	while (s1[i] && ft_check_if_set(s1[i], set))
		i++;
	if (i == ft_strlen(s1))
		trimmed = ft_i_is_len_s1(trimmed);
	if (i == ft_strlen(s1))
		return (trimmed);
	start = (char *)&s1[i];
	while (s1[len] && ft_check_if_set(s1[len], set))
		len--;
	end = (char *)&s1[len];
	trimmed = malloc(len + 1 - i + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_memmove(trimmed, &s1[i], len + 1 - i + 1);
	trimmed[len + 1 - i] = '\0';
	return (trimmed);
}
