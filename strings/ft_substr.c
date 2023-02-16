
#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	maxlen;

	if (!s || (size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	maxlen = ft_strnlen(s, start + len);
	if (maxlen <= start)
		maxlen = start;
	maxlen -= start;
	ret = (char *) ft_calloc(maxlen + 1, sizeof(char));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s + start, maxlen);
	ret[maxlen] = '\0';
	return (ret);
}
