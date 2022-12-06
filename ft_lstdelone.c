



#include "libft.h"
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.
// IN PROGRESS
void  *ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list *last;

    last = ft_lstlast(*lst);
    last->next = new; 
}
