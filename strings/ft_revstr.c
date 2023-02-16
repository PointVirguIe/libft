
#include "../libft.h"

char	*ft_revstr(char *s)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(s) - 1;
	i = 0;
	while (i < (len + 1) / 2)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		i++;
	}
	return (s);
}
