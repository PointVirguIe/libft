
#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!c)
		return ((char *) s + i);
	while (i >= 0)
	{
		if (*(unsigned char *) &s[i] == (unsigned char) c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}
