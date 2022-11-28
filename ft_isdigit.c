/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:23:15 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/27 17:52:07 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contains(char start, char end, char c)
{
	return (c >= start && c <= end);
}

// Cheks whether the argument passed can be is a digit or not.
int	ft_isdigit(int c)
{
	return (contains('0', '9', c));
}
