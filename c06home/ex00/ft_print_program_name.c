#include <unistd.h>

int	main(int ac, char **av)
{
	int	x;

	x = 0;
	if (ac > 0)
	{
		while (av[0][x] != '\0')
		{
			write(1, &av[0][x], 1);
			x++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
