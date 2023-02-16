
#include "../libft.h"

static size_t	get_word(char const *str, char charset, char mode)
{
	size_t	pos;

	pos = 0;
	if (!str)
		return (pos);
	while (str[pos] && mode == (charset == str[pos]))
		pos++;
	return (pos);
}

static size_t	get_word_count(char const *str, char charset)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = get_word(str, charset, TO);
	while (str && str[i])
	{
		len++;
		i += get_word(str + i, charset, SKIP);
		i += get_word(str + i, charset, TO);
	}
	return (len);
}

static void	*destroy_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	len;
	size_t	index;
	size_t	wlen;
	size_t	i;

	if (!s)
		return (NULL);
	len = get_word_count(s, c);
	arr = (char **) ft_calloc(len + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	index = 0;
	i = 0;
	while (s && index < len)
	{
		i += get_word(s + i, c, TO);
		wlen = get_word(s + i, c, SKIP);
		arr[index++] = ft_strndup(s + i, wlen);
		if (!arr[index - 1])
			return (destroy_arr(arr));
		i += wlen;
	}
	arr[index] = NULL;
	return (arr);
}
