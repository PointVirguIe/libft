
#include "../libft.h"

static char	*get_result(char *s, int n)
{
	if (n < 0)
		ft_revstr(s + 1);
	else
		ft_revstr(s);
	return (s);
}

static size_t	get_size(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	len += ft_intlen((int) n);
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	i;

	nb = (long) n;
	i = 0;
	res = (char *) ft_calloc((get_size(nb)), sizeof(char));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[i++] = '-';
		nb *= -1;
	}
	if (nb == 0)
		res[i++] = '0';
	while (nb)
	{
		res[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	res[i] = '\0';
	get_result(res, n);
	return (res);
}
