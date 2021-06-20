#include "libft.h"

t_list	*ft_lstmap (t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (tmp == NULL)
	{
		ft_lstclear(&tmp, del);
		return (NULL);
	}
	tmp->next = ft_lstmap(lst->next, f, del);
	return (tmp);
}
