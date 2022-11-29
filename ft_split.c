/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:50:36 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/29 23:01:41 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// IN PROGRESS

// Allocates and returns an array of strings obtained by splitting
// ’s’ using the character ’c’ as a delimiter. The array must end
// with a NULL pointer.

int	count_tokens(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}


char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	result = malloc(sizeof(char *) * (count_tokens(s, c) + 1));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;
			}
			result[i] = ft_substr(s - len, 0, len);
			i++;
		}
	}
	result[i] = '/0';
	return (result);
}
