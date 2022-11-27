/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facu <facu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:51:35 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/27 23:04:04 by facu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns lenght of string
size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}
