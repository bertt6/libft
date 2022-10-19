#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{ 
    t_list *iter;
    t_list *ret;
    
    if(!lst || !del || !f)
        return NULL;
    ret = 0;
    while(lst)
    {
        iter = ft_lstnew(f(lst->content));
        if(iter == NULL)
        {
            ft_lstclear(&ret,del);
            return (0);
        }
        ft_lstadd_back(&ret, iter);
        lst = lst->next;
    }
    return (ret);
}