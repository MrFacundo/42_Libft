/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:40:38 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/01 16:13:44 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains(char start, char end, char c)
{
	return (c >= start && c <= end);
}

int	ft_tolower(int c)
{
	if (contains('A', 'Z', c))
		c += 32;
	return (c);
}
