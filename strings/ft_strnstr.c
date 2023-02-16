
#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	i = 0;
	s1_len = ft_strnlen(haystack, len);
	s2_len = ft_strlen(needle);
	if (((int) len <= 0 && !haystack[0] && !needle[0]) || \
		(!haystack[0] && !needle[0]))
		return ((char *) haystack);
	if (s1_len < s2_len)
		return (NULL);
	while (i <= (s1_len - s2_len) && haystack[i])
	{
		if (ft_memcmp(haystack + i, needle, ft_strlen(needle)) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
