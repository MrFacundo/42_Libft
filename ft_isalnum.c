/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:26:56 by ftroiter          #+#    #+#             */
/*   Updated: 2022/10/26 19:34:15 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains(char start, char end, char c)
{
	return (c >= start && c <= end);
}

int	ft_isalnum(int c)
{
	return (contains('0', '9', c) || contains('a', 'z', c) || contains('A', 'Z', c))  ;
}
