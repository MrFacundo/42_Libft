




#include "libft.h"
// Adds the node ’new’ at the beginning of the list.
void  *ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    last = ft_lstlast(*lst);
    last->next = new; 
}