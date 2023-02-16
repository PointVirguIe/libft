
#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if ((void *) dst < (void *) src)
		return (ft_memcpy(dst, src, len));
	while (len)
	{
		len--;
		((char *) dst)[len] = ((char *) src)[len];
	}
	return (dst);
}
