
#include "../libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*realloced;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size <= old_size)
		return (ptr);
	realloced = ft_calloc(new_size, sizeof(void *));
	if (!realloced)
		return (NULL);
	if (!ptr)
		return (realloced);
	ft_memcpy(realloced, ptr, old_size);
	free(ptr);
	return (realloced);
}
