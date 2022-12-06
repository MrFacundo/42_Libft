


#include "libft.h"
// Counts the number of nodes in a list.
int *ft_lstsize(t_list *lst)
{
    int count;
    t_list *tmp;

    count = 0;
    tmp = lst;
    while (tmp->next)
    {
        tmp = tmp->next;
        count++;
    }
    return (count);  
}