
#include "../libft.h"

/*
	Description:	Get minimum value in array, it will compare every value
					in array between 0 and 'size'.
	@param			array: Array list of integers.
	@param			size: Size of 'array'.
	@returns		Min value in array,
*/
int	ft_array_min(int *array, size_t size)
{
	size_t	i;
	int		min;

	i = 1;
	min = array[0];
	while (i < size)
	{
		if (array[i] < min)
			min = array[i];
	}
	return (min);
}
