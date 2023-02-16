
#include "../libft.h"

static size_t	get_pos(const char *str)
{
	size_t	pos;

	pos = 0;
	while (ft_isspace(str[pos]))
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
		pos++;
	return (pos);
}

int	ft_atoi(const char *str)
{
	size_t	pos;
	size_t	digit;
	size_t	i;
	long	res;

	digit = 1;
	res = 0;
	pos = get_pos(str);
	if (!ft_isdigit(str[pos]))
		return ((int) res);
	if (pos > 0 && str[pos - 1] == '-')
		digit *= -1;
	i = pos;
	while (ft_isdigit(str[i]))
		i++;
	while (i != pos)
	{
		if (res == LONG_MAX || res == LONG_MIN)
			return ((int) res);
		res += (str[i - 1] - '0') * digit;
		digit *= 10;
		i--;
	}
	return ((int) res);
}
