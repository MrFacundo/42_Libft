/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facu <facu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:11:56 by facu              #+#    #+#             */
/*   Updated: 2022/11/21 17:55:53 by facu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int	size;
	size_t	i;

	size = ft_strlen(s) + 1;
	ptr = (char*)malloc(sizeof(*s) *  size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size - 1 && *s)
	{
		*ptr = *s;
		i++;
	}
	dst[i] = 0;

	return (ptr);
}