/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:27:56 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/27 17:33:49 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* returns index of first char in string that is not contained in set*/
size_t	strstart(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	
	j = 0;
	i = 0;
	while (s[i])
	{
		while (set[j])
		{
			if (s[i] != set[j])
				j++;
			else
				break ;
		}
		if (!set[j])
			return (i);
		i++;
		j = 0;
	}
	return (i);
}

size_t	strend(char const *s, char const *set)
{
	size_t	i;
	size_t	j;
	
	j = 0;
	i = ft_strlen(s);
	while (s[i])
	{
		while (set[j])
		{
			if (s[i] != set[j])
				j++;
			else
				break ;
		}
		if (!set[j])
			return (i);
		i--;
		j = 0;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	size_t	start;
	size_t	end;
	size_t	i;

	start = strstart(s1, set);
	end = strend(s1, set);
	buffer = (char *)malloc(end - start + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (s1[start] && start <= end)
	{
		buffer[i++] = s1[start];
		start++;
	}
	i = 0;
	return (buffer);
}
