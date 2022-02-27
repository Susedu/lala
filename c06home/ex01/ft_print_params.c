#include <unistd.h>

/*int	main(int ac, char **av)
{
	int	x;
	int	y;

	y = 1;
	while (ac > 0 && av[y][x] != 0)
	{
		x = 0;
		while (av[y][x] != '\0')
		{
			write(1, &av[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (0);
}*/

int	main(int ac, char **av)
{
	int	x;
	int	y;

	y = 1;
	if (ac > 1)
	{
		while (y < ac)
		{
			x = 0;
			while (av[y][x] != '\0')
			{
				write(1, &av[y][x], 1);
				x++;
			}
			write(1, "\n", 1);
			y++;
		}
	}
	return (0);
}
