#include "libft.h"
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.
void  *ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;

    tmp = lst;
    while (tmp->next)
    {
        f(tmp);
        tmp = tmp->next;
    }
    return (tmp); 
}
