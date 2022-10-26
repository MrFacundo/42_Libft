/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:23:47 by ftroiter          #+#    #+#             */
/*   Updated: 2022/10/26 20:33:20 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(char *str, int n)
{
    unsigned int i;

    i = 0;
    while (i < n && str[i] != '\0')
    {
        str[i] = '\0';
        i++;
    }
}

