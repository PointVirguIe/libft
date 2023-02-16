
#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	if (size && count > ((size_t) - 1) / size)
		return (NULL);
	alloc = malloc(size * count);
	if (!alloc)
		return (NULL);
	ft_memset(alloc, 0, (size * count));
	return (alloc);
}
