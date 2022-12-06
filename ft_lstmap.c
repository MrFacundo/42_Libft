#include "libft.h"
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
t_list   ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *tmp;
    t_list *tmp2;
    t_list *new_list;
    tmp = lst;
    while (tmp->next)
    {
        tmp2 = ft_lstnew(void *content)(f(tmp->next));
        ft_lstadd_back( **new_list, *new)
        tmp = tmp->next;
    }
    return (tmp); 
}
