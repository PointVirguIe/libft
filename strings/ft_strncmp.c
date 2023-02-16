
#include "../libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	n--;
	while ((*(unsigned char *)s1 && *(unsigned char *)s2) && \
	(n && (*(unsigned char *)s1 == *(unsigned char *)s2)))
	{
		n--;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
