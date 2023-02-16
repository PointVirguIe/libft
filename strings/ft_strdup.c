
#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char			*ret;
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (s1[len])
		len++;
	ret = (char *) ft_calloc(len + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
