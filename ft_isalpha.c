/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:56:09 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/27 17:52:07 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char start, char end, char c)
{
	return (c >= start && c <= end);
}

int	ft_isalpha(int c)
{
	return (contains('a', 'z', c) || contains('A', 'Z', c));
}
