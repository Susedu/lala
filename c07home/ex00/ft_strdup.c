#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	x;

	x = 0;
	while (src[x])
	{
		x++;
	}
	ptr = malloc(sizeof(char) * (x + 1));
	if (!ptr)
	{
		return (NULL);
	}
	x = 0;
	while (src[x])
	{
		ptr[x] = src[x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
