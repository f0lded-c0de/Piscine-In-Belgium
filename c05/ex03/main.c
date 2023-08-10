#include <unistd.h>
int	ft_recursive_power(int, int);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
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

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
        {
	        write(1, &str[i], 1);
	        i++;
	}
}

int main(void)
{
	ft_putnbr(ft_recursive_power(10, 3));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(1, 3));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(2, 2));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(12, 1));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(0, 13));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(-9, 3));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(4, 0));
	ft_putchar('\n');
	ft_putnbr(ft_recursive_power(4, -12));
	ft_putchar('\n');

	return (0);
}
