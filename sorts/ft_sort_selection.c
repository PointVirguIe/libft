
#include "../libft.h"

void	ft_sort_selection(int *arr, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	min_pos;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min_pos = i;
		while (j < size)
		{
			if (arr[j] < arr[min_pos])
				min_pos = j;
			j++;
		}
		if(min_pos != i)
			ft_swap(&arr[min_pos], &arr[i]);
		i++;
	}
}
