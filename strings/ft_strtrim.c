
#include "../libft.h"

static char	is_contain(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_len(char const *s, char const *set)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = ft_strlen(s);
	if (!i)
		return (0);
	while (s[len])
		len++;
	while (is_contain(set, s[i - 1]))
	{
		i--;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	len;
	size_t	i;

	if (!s1 || !s1[0])
		return (ft_strdup(""));
	if (!set || !set[0])
		return (ft_strdup((char *) s1));
	i = 0;
	while (is_contain(set, s1[i]))
		i++;
	len = get_len(s1 + i, set);
	if (len == 0)
		ret = ft_strdup("");
	else
		ret = ft_strndup(s1 + i, len);
	if (!ret)
		return (NULL);
	return (ret);
}
