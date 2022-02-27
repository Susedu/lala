#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac > 1)
	{
		y = ac - 1;
		while (y >= 1)
		{
			x = 0;
			while (av[y][x] != '\0')
			{
				write(1, &av[y][x], 1);
				x++;
			}
			write(1, "\n", 1);
			y--;
		}
	}
	return (0);
}
