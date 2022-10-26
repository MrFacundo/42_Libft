/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:23:15 by ftroiter          #+#    #+#             */
/*   Updated: 2022/10/26 19:34:42 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contains(char start, char end, char c)
{
	return (c >= start && c <= end);
}

int	ft_isdigit(int c)
{
	return (contains('0', '9', c));
}
