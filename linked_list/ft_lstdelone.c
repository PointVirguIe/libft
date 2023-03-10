
#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
		del(lst->content);
	if (lst)
		free(lst);
}
