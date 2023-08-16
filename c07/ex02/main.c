#include <unistd.h>
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9 || nb < -9)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr((nb / 10) * -1);
			ft_putnbr((nb % 10) * -1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putchar((nb * -1) + 48);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
        {
	        write(1, &str[i], 1);
	        i++;
	}
}

int	main(void)
{
	int	*tab;
	int	i;
	int	min;
	int	max;
	int	size;

	min = 4;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	i = 0;
	while (i < (max - min))
	{
		ft_putnbr(tab[i]);
		ft_putchar('\n');
		i ++;
	}
	ft_putstr("And the size returned by the function : ");
	ft_putnbr(size);
	ft_putchar('\n');
	free (tab);
	return (0);
}
