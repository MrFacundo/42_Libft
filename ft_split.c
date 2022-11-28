/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:50:36 by ftroiter          #+#    #+#             */
/*   Updated: 2022/11/28 22:31:55 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// IN PROGRESS

// Allocates and returns an array of strings obtained by splitting
// ’s’ using the character ’c’ as a delimiter. The array must end
// with a NULL pointer.
char	**ft_split(char const *s, char c)
{
	char *arr[2];

	char	*str_1_buffer;
	char	*str_2_buffer;
	size_t	i;
	size_t	j;

	while (s[i])
		if (s[i] == c)
		{
			ft_substr(s, i , i);
		}


	i = ft_strchr(s, c);
	str_1_buffer = ft_substr(s, 0, i);
	str_2_buffer = ft_substr(s, i + 1, ft_strlen(s) + 1);

	arr[0] = &str_1_buffer;
	arr[1] = &str_2_buffer;

	return (arr);
}