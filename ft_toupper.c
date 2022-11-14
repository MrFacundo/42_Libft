/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:26:28 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/01 16:14:08 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains(char start, char end, char c)
{
	return (c >= start && c <= end);
}

int	ft_toupper(int c)
{
	if (contains('a', 'z', c))
		c -= 32;
	return (c);
}
