
#include "../libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	pos;
	size_t	len;

	i = 0;
	pos = 0;
	len = ft_strlen(dest) + ft_strlen(src);
	while (dest[pos])
		pos++;
	if (size < pos)
		return (ft_strlen(src) + size);
	if (size > 0)
		size--;
	while (pos + i < size && src[i])
	{
		dest[pos + i] = src[i];
		i++;
	}
	dest[pos + i] = '\0';
	return (len);
}
