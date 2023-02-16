
#include "../libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	new->next = tmp;
	*lst = new;
}
