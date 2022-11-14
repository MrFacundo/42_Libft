/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:49:28 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/01 16:00:49 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	i = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (!size)
		return (src_length);
	while (src[i] && dst_length + i < size - 1)
	{
	dst[dst_length + i] = src[i];
	i++;
	}
	dst[dst_length + i] = 0;
	if (dst_length > size)
		return (src_length + size);
	return (src_length + dst_length);
}
