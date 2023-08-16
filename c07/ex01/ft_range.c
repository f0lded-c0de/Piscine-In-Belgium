#include <stdlib.h>
void	ft_putstr(char *str);

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
