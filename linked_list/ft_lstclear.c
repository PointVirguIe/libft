
#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*index;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	index = *lst;
	while (index)
	{
		next = index->next;
		if (index->content)
			del(index->content);
		free(index);
		index = next;
	}
	*lst = NULL;
}
