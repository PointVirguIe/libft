
#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!(char) c)
		return ((char *) s + ft_strlen(s));
	return ((char *) ft_memchr((const void *) s, c, ft_strlen(s)));
}
