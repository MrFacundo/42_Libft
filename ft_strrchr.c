/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facu <facu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:01:04 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/27 22:57:13 by facu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns index of last ocurrence of char c in string s
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (0);
}
