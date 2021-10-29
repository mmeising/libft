/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeising <mmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:24:57 by mmeising          #+#    #+#             */
/*   Updated: 2021/10/27 21:02:46 by mmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	returns 1 if c is char '0' to '9' (ASCII values 48 to 57), else returns 0
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}