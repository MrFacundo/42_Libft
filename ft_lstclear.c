
#include "libft.h"
// IN PROGRESS
// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to NULL.
void  *ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *last;

    last = ft_lstlast(*lst);
    last->next = new; 
}