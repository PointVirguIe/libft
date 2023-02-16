
#include "../libft.h"

char	*ft_strndup(char const *src, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *) ft_calloc(n + 1, sizeof(char));
	if (!dup)
		return (NULL);
	while (i < n && src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
