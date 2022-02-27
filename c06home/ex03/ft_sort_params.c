#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		write(1, c, 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] && s1[n] == s2[n])
	{
		n++;
	}
	return (s1[n] - s2[n]);
}

void	ft_sort_tab(char *tab[], int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	h;

	h = 1;
	ft_sort_tab(av, ac);
	while (h <= ac - 1)
	{
		ft_putstr(av[h++]);
	}
	return (0);
}
