/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:30:02 by mmeising          #+#    #+#             */
/*   Updated: 2021/08/12 21:07:45 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ele_count(char const *s, char c)
{
	size_t	count;
	int		i;
	int		is_delimiter;

	count = 0;
	i = 0;
	is_delimiter = 0;
	if (s[i] != c && s[i] != '\0')
		count++;
	while (s[i] != '\0')
	{
		if (is_delimiter == 1 && s[i] != c)
			count++;
		if (s[i] == c)
			is_delimiter = 1;
		else if (s[i] != c)
			is_delimiter = 0;
		i++;
	}
	return (count);
}

static size_t	*ft_set_headntail(char const *s, char c, size_t headntail[2])
{
	headntail[0] = headntail[1];
	while (s[headntail[0]] == c)
		headntail[0]++;
	headntail[1] = headntail[0];
	while (s[headntail[1]] != c && s[headntail[1]] != '\0')
		headntail[1]++;
	return (headntail);
}

static size_t	ft_do_strings(char const *s, char c,
				size_t headntail[2], char **split)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < ft_ele_count(s, c))
	{
		ft_set_headntail(s, c, headntail);
		j = 0;
		split[i] = ft_substr(s, headntail[0], headntail[1] - headntail[0] + 1);
		if (split[i] == NULL)
		{
			while (i >= 0)
			{
				free(split[i--]);
				i--;
			}
			free(split);
			return (0);
		}
		split[i][headntail[1] - headntail[0]] = '\0';
		headntail[0] = headntail[1];
		i++;
	}
	return (i);
}

/* ft_do_strings returns i, line 97 can null-terminate & run whole function */
char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	headntail[2];
	size_t	test;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	headntail[0] = 0;
	headntail[1] = 0;
	split = (char **)malloc((ft_ele_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	test = ft_do_strings(s, c, headntail, split);
	split[test] = NULL;
	return (split);
}
