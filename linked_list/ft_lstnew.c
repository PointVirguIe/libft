
#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstnew_secure(void *content, void (*del)(void *))
{
	t_list	*new;

	new = ft_lstnew(content);
	if (!new)
		del(content);
	return (new);
}
