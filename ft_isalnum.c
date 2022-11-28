/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:26:56 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/01 15:48:13 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cheks whether the argument passed is an alphanumeric character or not.
int
	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
