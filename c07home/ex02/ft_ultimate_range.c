#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;

	x = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!*range)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[x] = min;
		x++;
		min++;
	}
	return (x);
}
