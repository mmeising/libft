/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:10:35 by mmeising          #+#    #+#             */
/*   Updated: 2021/08/13 14:59:18 by mmeising         ###   ########.fr       */
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
		if (str[i] == (char)c)
		{
			ptr = &str[i];
			return ((char *)ptr);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		ptr = &str[i];
		return ((char *)ptr);
	}
	return (NULL);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("%s\n%s\n", ft_strchr("tester", 't' + 256), strchr("tester", 't' + 256));
}