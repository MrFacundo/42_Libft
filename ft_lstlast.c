/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:35 by ftroiter          #+#    #+#             */
/*   Updated: 2022/12/06 22:44:42 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the last node of the list.
#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
		return (NULL);
    while (lst->next)
    {
        lst = lst->next;
    }
    return (lst);  
}
