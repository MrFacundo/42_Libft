/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facu <facu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:28:51 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/27 23:14:14 by facu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Allocates and returns a pointer to a string which is aa substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*buffer;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	buffer = malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (0);
	ft_strlcpy(buffer, s + start, len + 1);
	return (buffer);
}
