#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*x;
	int	y;

	if (min >= max)
	{
		return (NULL);
	}
	x = malloc((max - min) * sizeof(int));
	if (x == NULL)
	{
		return (x);
	}
	y = 0;
	while (min < max)
	{
		x[y] = min;
		y++;
		min++;
	}
	return (x);
}
