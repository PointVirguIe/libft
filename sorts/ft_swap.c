
/*
	Description:	Swap place between 'a' and 'b'.
	@param			a: Reference of an element in an array list.
	@param			b: Reference of an element in an array list.
*/
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
