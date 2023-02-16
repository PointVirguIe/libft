
#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;

	ret = (char *) ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		ret[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
