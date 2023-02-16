
#include "../libft.h"

/*
	Description:	Get maximum value in array, it will compare every value
					in array between 0 and 'size'.
	@param			array: Array list of integers.
	@param			size: Size of 'array'.
	@returns		Max value in array,
*/
int	ft_array_max(int *array, size_t size)
{
	size_t	i;
	int		max;

	i = 1;
	max = array[0];
	while (i < size)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
