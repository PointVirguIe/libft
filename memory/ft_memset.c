
#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*src;
	size_t	i;

	src = b;
	i = 0;
	while (i < len)
	{
		*(char *) (src + i) = c;
		i++;
	}
	b = src;
	return (b);
}
