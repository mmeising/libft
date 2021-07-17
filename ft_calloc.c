/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 14:09:59 by mmeising          #+#    #+#             */
/*   Updated: 2021/07/06 16:13:19 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned int	i;
	char			*char_ptr;

	ptr = malloc(count * size);
	i = (count * size);
	char_ptr = (char *)ptr;
	if (ptr == (void *)0)
		return ((void *)0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
