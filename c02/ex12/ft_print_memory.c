#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(void *hex)
{
	char	*buff;

	buff = hex;
	ft_putchar((*buff / 16) + 48);
	if ((*buff % 16) <= 9)
		ft_putchar((*buff % 16) + 48);
	else
		ft_putchar((*buff % 16) + 87);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < 16)
		{
			
		}
		j = 0;
		i += 16;
	}
}
