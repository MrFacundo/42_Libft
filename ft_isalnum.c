/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:26:56 by ftroiter          #+#    #+#             */
/*   Updated: 2023/01/10 20:58:41 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cheks whether the argument passed is an alphanumeric character or not.
int ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
