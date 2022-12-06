/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftroiter <ftroiter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:40:46 by ftroiter          #+#    #+#             */
/*   Updated: 2022/12/06 23:04:42 by ftroiter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
t_list   *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *tmp;
    t_list *res;

    while (lst)
    {
        tmp = ft_lstnew(f(lst->next));
        ft_lstadd_back(&res, tmp);
        lst = lst->next;
    }
    return (res); 
}
